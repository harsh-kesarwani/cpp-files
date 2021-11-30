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
vector<int> adj[N];
vector<bool> vis(N);

void dfs(int s) {
	if(vis[s]) return;
	vis[s]=true;
	for(auto x:adj[s]) {
		dfs(x);
	}
}

void solve() {
	int n,m;
    cin>>n>>m;
	for(int i=0;i<n;i++) adj[i].clear();
	fill_n(vis.begin(),n,false);
	for(int i=0,a,b;i<m;i++) {
		cin>>a>>b;
		a--;b--;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	//





    //
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