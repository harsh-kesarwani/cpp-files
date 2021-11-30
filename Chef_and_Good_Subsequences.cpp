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
	int n,k;
    cin>>n>>k;
    unordered_map<int,int> cnt;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        cnt[x]++;
    }
    // for(auto x:cnt) cout<<x.ff<<" "<<x.ss<<endl;
    int sz = cnt.size();
    k = min(k,sz);
    vector<int> fq;
    for(auto x:cnt) fq.pb(x.ss);
    // for(auto x:fq) cout<<x<<" ";
    cout<<endl;
    vector<vector<int>> dp(sz+1,vector<int>(k+1,0));
    for(int i=0;i<=sz;i++) dp[i][0]=1;
    for(int i=1;i<=sz;i++) {
        for(int j=1;j<=min(k,i);j++) {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]*1LL*fq[i-1]) % mod;
        }
    }
    int ans = 0;
    for(int i=0;i<=k;i++) {
        (ans += dp[sz][i]) %= mod;
    }
    cout<<ans<<endl;
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