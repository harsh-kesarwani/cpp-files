#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define ll long long
typedef long long li;

const int N = 300 * 1000 + 13;

int n;
li a[N], b[N];

li solve() {
	scanf("%d", &n);
	forn(i, n) scanf("%lld%lld", &a[i], &b[i]);
	
	li ans = 0, mn = 1e18;
	forn(i, n) {
		int ni = (i + 1) % n;
		li val = min(a[ni], b[i]);
		ans += a[ni] - val;
		mn = min(mn, val);
	}
	ans += mn;
	return ans;
}
ll solve1() {
		int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++) {
            cin>>a[i]>>b[i];
        }
        ll ans=0, mn=LONG_MAX;
        for(int i=0;i<n;i++) {
            int ni=(i+1)%n;
            ll val=min(a[ni],b[i]);
            ans+=a[ni]-val;
            mn=min(mn,val);
        }
        ans+=mn;
	return ans;
}

int main() {
		//cout<<solve1();
		//cout<<endl;
		solve();
}
