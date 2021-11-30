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
	freopen("/home/harsh/Downloads/gold_mine_chapter_1_input.txt", "r", stdin);
	freopen("/home/harsh/Downloads/gold_mine_chapter_1_output.txt", "w", stdout);
	#endif
}

const int N = 50;
int gold[N];
vector<int> adj[N],child[N];

void dfs(int x, int par) {
    for(auto c:adj[x]) {
        if(c==par) continue;
        child[x].pb(c);
        dfs(c,x);
    }
}

int count(int x) {
    int mx = 0;
    for(auto c:child[x]) {
        mx = max(mx,count(c));
    }
    return gold[x]+mx;
}

int solve() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        adj[i].clear();
        child[i].clear();
        cin>>gold[i];
    }
    for(int i=0,a,b;i<n-1;i++) {
        cin>>a>>b;
        a--;b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(0,-1);
    // for(int i=0;i<n;i++) {
    //     cout<<i<<" ";
    //     for(auto x:child[i]) {
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> v;
    for(auto x:child[0]) {
        v.pb(count(x));
    }
    sort(all(v),greater<int>());
    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    int ans = gold[0];
    if(v.size()>0) ans+=v[0];
    if(v.size()>1) ans+=v[1];
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