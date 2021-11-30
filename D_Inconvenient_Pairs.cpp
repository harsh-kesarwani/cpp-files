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

ll sop(map<int,int> &mp) {
    ll sum=0,ssum=0;
    for(auto x:mp) {
        sum += x.ss;
        ssum += x.ss*1LL*x.ss;
    }
    return (sum*sum-ssum)/2;
}

ll calc(vector<int> &x, vector<pii> &pts) {
    sort(all(pts));
    ll ans = 0;
    int i=0, j=0, n=x.size(), m=pts.size();
    map<int,int> mp;
    while(j<m) {
        if(i==n || pts[j].ff<x[i]) {
            mp[pts[j].ss]++;
            j++;
        }
        else if(pts[j].ff==x[i]) j++;
        else {
            ans += sop(mp);
            mp.clear();
            i++;
        }
    }
    ans += sop(mp);
    return ans;
}

void solve() {
	int n,m,k;
    cin>>n>>m>>k;
    vector<int> x(n),y(m);
    for(auto &z:x) cin>>z;
    for(auto &z:y) cin>>z;
    vector<pii> pts;
    for(int i=0,a,b;i<k;i++) {
        cin>>a>>b;
        pts.pb({a,b});
    }
    ll ans = 0;
    ans += calc(x,pts);
    for(auto &x:pts) swap(x.ff,x.ss);
    ans += calc(y,pts);
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