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

vector<string> v;

int calc(string pow, string str) {
    int i=0,j=0,m=pow.size(),n=str.size();
    while(i<m && j<n) {
        if(pow[i]==str[j]) i++;
        j++;
    }
    int add = m-i;
    int del = n-i;
    return add+del;
}


void solve() {
	string s;
    cin>>s;
    int ans = s.length()+1;
    for(auto x:v) {
        ans = min(ans,calc(x,s));
    }
    cout<<ans<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    ll x = 1;
    for(int i=0;i<63;i++) {
        v.pb(to_string(x));
        x*=2;
    }
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		solve();
	}
	return 0;
}