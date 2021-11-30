#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) x.begin(),x.end()
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define PI 3.1415926535897932384626
#define mod 1000000007
#define modd 998244353

void io() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}
const int MAX = 1e5;
vector<pii> adj[MAX+1];
vector<int> fq(MAX+1);
vector<int> par;

void dfs(int s, int e) {
	fq[s]=0;
	for(auto u:adj[s]) {
		if(u.ff==e) continue;
		dfs(u.ff,s);
		fq[s]+=fq[u.ff];
		par[u.ff]=s;
 	}
 	if(!fq[s]) fq[s]++;
}

int main() {
	io();
	
	int T;
	cin>>T;
	while(T--) {
		ll n,s;
		cin>>n>>s;
		for(int i=0;i<=MAX;i++) adj[i].clear();
		par.resize(n+1,0);
		for(int i=1;i<n;i++) {
			int a,b,w;
			cin>>a>>b>>w;
			adj[a].push_back({b,w});
			adj[b].push_back({a,w});
		}
		dfs(1,0);
		for(int i=1;i<=n;i++) 
			cout<<i<<" "<<fq[i]<<" "<<par[i]<<endl;
		cout<<endl;
		set<pair<int,int>> st;
		for(int i=2;i<=n;i++) {
			st.insert({    ,fq[i]});
		}
	}
	return 0;
}
