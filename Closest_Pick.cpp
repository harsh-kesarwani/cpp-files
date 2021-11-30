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
	int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    vector<int> w;
    int dif = 0;
    for(int i=1;i<v.size();i++) {
        w.pb((v[i]-v[i-1])/2);
        dif = max(dif,(v[i]-v[i-1]-1));
    }
    w.pb(v[0]-1);
    w.pb(k-v[v.size()-1]);
    sort(all(w),greater<int>());
    int ans = max(dif,w[0]+w[1]);
    cout<<fixed<<setprecision(8)<<ans/(double)k<<endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	int cs=0;
	while(T--) {
		cout<<"Case #"<<++cs<<": ";
		solve();
	}
	return 0;
}