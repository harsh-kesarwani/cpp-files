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
	int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    ll ans = 1;
    vector<ll> dp(n,1);
    for(int i=1;i<n;i++) {
        if(v[i]>=v[i-1]) dp[i]+=dp[i-1];
        ans+=dp[i];
    }
    cout<<ans<<endl;
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