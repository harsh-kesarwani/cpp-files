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

const int N = 1e5;
int par[N+1], size[N+1];

int rep(int x) {
    while(x!=par[x]) x=par[x];
    return x;
}

bool same(int a, int b) {
    return rep(a)==rep(b);
}

void unite(int a, int b) {
    a = rep(a);
    b = rep(b);
    if(size[a]<size[b]) swap(a,b);
    size[a]+=size[b];
    par[b]=a;
}

void solve() {
	int n,k,p;
    cin>>n>>k>>p;
    vector<pii> v;
    for(int i=1;i<=n;i++) {
        int x; cin>>x;
        v.pb({x,i});
    }
    sort(all(v));
    for(int i=1;i<=n;i++) {
        par[i]=i;
        size[i]=1;
    }
    for(int i=1;i<n;i++) {
        if(v[i].ff<=v[i-1].ff+k) unite(v[i].ss,v[i-1].ss);
    }
    for(int i=0;i<p;i++) {
        int a,b;
        cin>>a>>b;
        cout<<(same(a,b) ? "Yes" : "No")<<endl;
    }
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