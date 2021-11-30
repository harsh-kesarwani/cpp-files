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

ll lcm(ll a, ll b) {
    return a*b/__gcd(a,b);
}

void solve() {
	ll n;
    cin>>n;
    ll ans=1;
    for(ll i=1;i*i<=n;i++) {
        if(n%i==0 && lcm(i,n/i)==n) ans=i;
    }
    cout<<ans<<" "<<n/ans<<endl;
}

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	// cin>>T;
	T=1;
	while(T--) {
		solve();
	}
	return 0;
}