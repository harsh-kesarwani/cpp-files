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
	int n;
    cin>>n;
    vector<ll> u(n);
    for(int i=0;i<n;i++) {
        cin>>u[i];
        u[i]--;
    }
    ll sum = 0;
    vector<vector<ll>> v(n);
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        v[u[i]].pb(x);
        sum+=x;
    }
    for(auto &x:v) {
        sort(all(x));
        for(int i=1;i<x.size();i++) {
            x[i]+=x[i-1];
        }
    }
    vector<ll> ans(n,0);
    for(auto x:v) {
        int k = x.size();
        for(int i=1;i<=k;i++) {
            int ind = k%i;
            ans[i-1]+=x[k-1];
            if(ind>0) ans[i-1]-=x[ind-1];
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
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