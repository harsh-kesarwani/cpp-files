#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007

void solve() {
	string s;
    int n;
    cin>>s>>n;
    int val = 1;
    for(int i=1;i<s.size();i++) val*=10;
    stack<int> ones, others;
    for(int i=0;i<s.size();i++) {
        int num = s[i]-'0';
        for(int j=0;j<num;j++) {
            if(val==1) ones.push(val);
            else others.push(val);
        }
        val/=10;
    }
    int sz = ones.size() + others.size();
    while(sz < n) {
        int k = others.top();
        others.pop();
        if(k==10) {
            for(int i=0;i<10;i++)
                ones.push(1);
        }
        else {
            for(int i=0;i<10;i++)
                others.push(k/10);
        }
        sz += 9;
    }
    int m = n-1;
    while(m>0 && !ones.empty()) {
        cout<<ones.top()<<" ";
        ones.pop();
        m--;
    }
    while(m>0 && !others.empty()) {
        cout<<others.top()<<" ";
        others.pop();
        m--;
    }
    int last = 0;
    while(!ones.empty()) {
        last += ones.top();
        ones.pop();
    }
    while(!others.empty()) {
        last += others.top();
        others.pop();
    }
    cout<<last<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		solve();
	}
	return 0;
}