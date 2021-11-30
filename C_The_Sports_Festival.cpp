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
	ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    vector<vector<ll>> dp(n,vector<ll>(n,0));
    for(ll i=n-1;i>=0;i--) {
        for(ll j=i+1;j<n;j++) {
            dp[i][j]=v[j]-v[i]+min(dp[i][j-1],dp[i+1][j]);
        }
    }
    cout<<dp[0][n-1]<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	// cin>>T;
	T=1;
	while(T--) {
		solve();
	}
	return 0;
}