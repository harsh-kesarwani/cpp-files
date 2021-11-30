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

int cs = 0;

void solve() {
	int n,a,b;
    cin>>n>>a>>b;
    vector<int> v(n+2,0);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) {
        int mn = min(v[i],v[i+1]);
        v[i]-=mn;
        v[i+1]-=mn;
        v[i+2]+=mn;
    }
    int ans=0;
    for(auto x:v) ans+=x;
    int ind=0;
    for(int i=0;i<n+2;i++) {
        if(v[i]) ind=i;
    }
    cout<<"Case #"<<++cs<<": "<<ans+ind<<endl;
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