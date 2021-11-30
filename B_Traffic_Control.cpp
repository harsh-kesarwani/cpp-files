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

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("/home/harsh/Downloads/traffic_control_input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/traffic_control_output.txt", "w", stdout);
	// #endif
}

void solve() {
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(min(a,b)<n+m-1) {
        cout<<"Impossible"<<endl;
        return;
    }
    cout<<"Possible"<<endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i==0 && j==0) cout<<a-n-m+2<<" ";
            else if(i==n-1 && j==0) cout<<b-n-m+2<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
    return;
}

int main() {
    io();
	int T;
	cin>>T;
    int cs = 0;
	while(T--) {
		cout<<"Case #"<<++cs<<": ";
        solve();
	}
	return 0;
}