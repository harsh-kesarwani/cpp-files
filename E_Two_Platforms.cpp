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
    vector<int> x(n),y(n);
    for(auto &z:x) cin>>z;
    for(auto &z:y) cin>>z;
    sort(all(x));
    vector<pii> pts;
    int cnt = 0;
    for(int i=0;i<n;i++) {
        cnt++;
        if(i+1==n || x[i+1]!=x[i]) {
            pts.pb({x[i],cnt});
            cnt=0;
        }
    }
    int sz = pts.size();
    if(sz == 1) {
        cout<<n<<endl;
        return;
    }
    vector<int> l(sz),r(sz);
    cnt=0;
    for(int i=0,j=0;i<sz;i++) {
        cnt+=pts[i].ss;
        while(pts[i].ff - pts[j].ff > k) {
            cnt-=pts[j++].ss;
        }
        l[i]=cnt;
        if(i>0) l[i]=max(l[i],l[i-1]);
    }
    cnt=0;
    for(int i=sz-1,j=sz-1;i>=0;i--) {
        cnt+=pts[i].ss;
        while(pts[j].ff - pts[i].ff > k) {
            cnt-=pts[j--].ss;
        }
        r[i]=cnt;
        if(i<sz-1) r[i]=max(r[i],r[i+1]);
    }
    int ans=0;
    for(int i=0;i<sz-1;i++) {
        ans = max(ans,l[i]+r[i+1]);
    }
    cout<<ans<<endl;
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