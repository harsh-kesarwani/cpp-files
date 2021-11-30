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
#define INF 10000000

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	// freopen("/home/harsh/Downloads/gold_mine_chapter_2_validation_input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/gold_mine_chapter_2_validation_output.txt", "w", stdout);
	#endif
}

const int N = 50;
int gold[N],red[N],par[N];
vector<int> adj[N],child[N],leafs;

void dfs_par_child_leaf(int x, int p) {
    if(adj[x].size()==1 && adj[x][0]==par[x]) leafs.pb(x);
    for(auto c:adj[x]) {
        if(c==p) continue;
        child[x].pb(c);
        par[c]=x;
        dfs_par_child_leaf(c,par[c]);
    }
}

void color(int x) {
    if(red[x]) return;
    red[x]=1;
    while(par[x]!=-1 && !red[par[x]]) {
        x=par[x];
        red[x]=1;
    }
    return;
}

int get_max(int flag) {
    int mx=0,mx_leaf=-1;
    for(auto x:leafs) {
        int cur_leaf=x;
        if(red[x]) continue;
        assert(child[x].empty());
        int sum = gold[x];
        while(par[x]!=-1 && !red[par[x]]) {
            x=par[x];
            sum+=gold[x];
        }
        if(flag && par[x]!=0) continue;
        if(sum>mx) {
            mx=sum;
            mx_leaf=cur_leaf;
        }
    }
    if(mx_leaf!=-1) color(mx_leaf);
    return mx;
}

int solve() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++) {
        adj[i].clear();
        child[i].clear();
        red[i]=0;
        cin>>gold[i];
    }
    for(int i=0,a,b;i<n-1;i++) {
        cin>>a>>b;
        a--;b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(k==0) {
        return gold[0];
    }

    par[0]=-1;
    leafs.clear();

    dfs_par_child_leaf(0,par[0]);
    
    int ans = 0;
    ans += get_max(0);
    ans += get_max(1);
    for(int i=0;i<k-1;i++) {
        ans+=get_max(0);
    }
    return ans;
}

int main() {
	io();
	int T;
	cin>>T;
    int cs = 1;
	while(T--) {
		cout<<"Case #"<<cs++<<": "<<solve()<<endl;
	}
	return 0;
}