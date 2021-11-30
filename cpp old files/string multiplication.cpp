#include <bits/stdc++.h>
using namespace std;

void io() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

//method 1
string add(string A, string B) {
    int i=A.size()-1,j=B.size()-1,carry=0,sum=0;
    string ans;
    while(i>=0 || j>=0 || carry) {
        sum = carry;
        if(i>=0) sum += A[i]-'0';
        if(j>=0) sum += B[j]-'0';
        ans += sum%10 + '0';
        carry = sum/10;
        i--; j--;
    }
    while(ans.back()=='0' && ans.size()>1) ans.pop_back();
    reverse(ans.begin(),ans.end());
    return ans;
}
 
string multiply1(string A, string B) {
    vector<string> v(10);
    for(int i=1;i<10;i++) {
        v[i] = add(v[i-1],A);
    }
    string ans;
    for(int i=0;i<B.size();i++) {
        ans = add(ans+'0',v[B[i]-'0']);
    }
    return ans;
}

//method 2
string multiply2(string A, string B) {
    vector<int> v(A.size()+B.size(),0);
    for(int i=A.size()-1;i>=0;i--) {
        for(int j=B.size()-1;j>=0;j--) {
            v[i+j+1] += (A[i]-'0')*(B[j]-'0');
        }
    }
    for(int i=v.size()-1;i>0;i--) {
        v[i-1] += v[i]/10;
        v[i] %= 10;
    }
    int i=0;
    while(i<v.size()-1 && !v[i]) i++;
    string ans;
    while(i<v.size()) ans += v[i++]+'0';
    return ans;
}

int main() {
    io();
    string s,t;
    cin>>s>>t;
    cout<<multiply1(s,t)<<endl<<multiply2(s,t);
    return 0;
}