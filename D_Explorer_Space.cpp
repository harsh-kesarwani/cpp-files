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
	int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> a(n,vector<int>(m-1));
    vector<vector<int>> b(n-1,vector<int>(m));
    for(auto &x:a) {
        for(auto &y:x)
            cin>>y;
    }
    for(auto &x:b) {
        for(auto &y:x)
            cin>>y;
    }
    if(k%2) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cout<<-1<<" ";
            }
            cout<<endl;
        }
        return;
    }
    k/=2;
    vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k)));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int d = 1e9;
            if(j<m-1) d = min(d,a[i][j]);
            if(j>0) d = min(d,a[i][j-1]);
            if(i<n-1) d = min(d,b[i][j]);
            if(i>0) d = min(d,b[i-1][j]);
            dp[i][j][0] = d;
        }
    }
    for(int z=1;z<k;z++) {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int d = 1e9;
                if(j<m-1) d = min(d,a[i][j] + dp[i][j+1][z-1]);
                if(j>0) d = min(d,a[i][j-1] + dp[i][j-1][z-1]);
                if(i<n-1) d = min(d,b[i][j] + dp[i+1][j][z-1]);
                if(i>0) d = min(d,b[i-1][j] + dp[i-1][j][z-1]);
                dp[i][j][z] = d; 
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<2*dp[i][j][k-1]<<" ";
        }
        cout<<endl;
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