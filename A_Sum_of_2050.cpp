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
    if(n%2050) {
        cout<<-1<<endl;
        return;
    }
    ll k = n/2050;
    ll ans = 0;
    while(k) {
        ans+=k%10;
        k/=10;
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