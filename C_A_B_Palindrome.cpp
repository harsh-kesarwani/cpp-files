#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    int a,b;
    string s;
    cin>>a>>b>>s;
    if(a%2 && b%2) {
        cout<<-1<<endl;
        return;
    }
    int n=a+b;
    int mid=(a+b)/2;
    if(a%2) {
        if(s[mid]=='1') {
            cout<<-1<<endl;
            return;
        }
        else s[mid]='0';
    }
    if(b%2) {
        if(s[mid]=='0') {
            cout<<-1<<endl;
            return;
        }
        else s[mid]='1';
    }
    for(int i=0;i<mid;i++) {
        if((s[i]=='0' && s[a+b-1-i]=='1') || (s[i]=='1' && s[a+b-1-i]=='0')) {
            cout<<-1<<endl;
            return;
        }
        if(s[i]=='1' || s[a+b-1-i]=='1') {
            s[i]='1';
            s[a+b-1-i]='1';
        }
        if(s[i]=='0' || s[a+b-1-i]=='0') {
            s[i]='0';
            s[a+b-1-i]='0';
        }
    }
    int one=0,zer=0;
    for(auto x:s) {
        if(x=='1') one++;
        else if(x=='0') zer++;
    }
    if(zer>a || one>b) {
        cout<<-1<<endl;
        return;
    }
    a-=zer;
    b-=one;
    for(int i=0;i<n;i++) {
        if(s[i]=='?') {
            if(a>0) {
                s[i]='0';
                s[n-1-i]='0';
                a-=2;
            }
            else if(b>0) {
                s[i]='1';
                s[n-1-i]='1';
                b-=2;
            }
        }
    }
    cout<<s<<endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	while(T--) {
		solve();
	}
	return 0;
}