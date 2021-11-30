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

const int N = 2000;
vector<int> link(N), sz(N), node(N);

int find(int x) {
	while(x != link[x]) x = link[x];
	return x;
}

void unite(int a, int b) {
	a = find(a);
	b = find(b);
	if(sz[a]<sz[b]) swap(a,b);
	sz[a] += sz[b];
	link[b] = a;
}

ll calc(vector<int> &v) {
	int l = v.size();
	sort(all(v));
	ll sum = 0;
	for(int i=0;i<l/2;i++) {
		sum += v[i];
	}
	sum *= 2;
	if(l%2) sum += v[l/2];
	return sum;
}

void solve() {
	int n,p;
	cin>>n>>p;
	for(int i=1;i<=n;i++) {
		cin>>node[i];
		link[i]=i;
		sz[i]=1;
	}
	for(int i=1;i<=p;i++) {
		int a,b;
		cin>>a>>b;
		unite(a,b);
	}
	int grp = 0;
	map<int,int> rep_to_grp;
	for(int i=1;i<=n;i++) {
		if(link[i]==i) {
			rep_to_grp[i]=grp++;
		}
	}
	vector<vector<int>> v(grp);
	for(int i=1;i<=n;i++) {
		int g = rep_to_grp[find(i)];
		v[g].pb(node[i]);
	}
	ll ans = 0;
	for(auto &x:v) {
		ans += calc(x);
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