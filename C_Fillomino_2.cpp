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
    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++) {
        cin>>v[i][i];
    }
    for(int i=0;i<n;i++) {
        int x=i,y=i;
        for(int j=1;j<v[i][i];j++) {
            if(y>0 && v[x][y-1]==0) y--;
            else x++;
            v[x][y]=v[i][i];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            cout<<v[i][j]<<" ";
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