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

ll powm(ll x, ll n) {
	ll res=1;
	while(n) {
		if(n%2) res=(res*x)%mod;
		x=(x*x)%mod;
		n/=2;
	}
	return res;
}

void solve() {
	int n,k;
    cin>>n>>k;
    cout<<powm(n,k)<<endl;
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