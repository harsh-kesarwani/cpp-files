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
    vector<ll> a(n),b(n),forpro(n+1,0);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    vector<vector<ll>> backpro(n,vector<ll>(n,0));
    for(int i=0;i<n;i++) {
        forpro[i+1] = forpro[i] + a[i]*b[i];
        backpro[i][i] = a[i]*b[i];
    }
    for(int i=n-1;i>=0;i--) {
        for(int j=i+1;j<n;j++) {
            backpro[i][j] = backpro[i+1][j-1] + a[i]*b[j] + a[j]*b[i];
        }
    }
    ll ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            ll forproij = forpro[n] - (forpro[j+1] - forpro[i]);
            ll cur = backpro[i][j] + forproij;
            ans = max(ans,cur);
        }
    }
    cout<<ans<<endl;
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