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
	int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    vector<pair<int,pair<int,int>>> pr;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>v[i][j];
            pr.pb({v[i][j],{i,j}});
        }
    }
    sort(all(pr));
    vector<pair<int,int>> rem;
    set<int> s;
    for(int i=0;i<m;i++) s.insert(i);
    for(int i=0;i<m;i++) {
        int col = pr[i].ss.ss;
        if(s.count(col)) s.erase(col);
        else rem.pb(pr[i].ss);
    }
    auto it=s.begin();
    for(auto x:rem) {
        int i=x.ff,j=x.ss;
        swap(v[i][j],v[i][*it++]);
    }
    for(auto x:v) {
        for(auto y:x) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
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