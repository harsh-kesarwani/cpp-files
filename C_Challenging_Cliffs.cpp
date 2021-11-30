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
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    int ind = 0, dif = 1e9;
    for(int i=0; i<n-1; i++) {
        if(v[i+1] - v[i] < dif) {
            dif = v[i+1] - v[i];
            ind = i;
        }
    }
    for(int i = ind; i<n; i++) if(i != ind+1) cout<<v[i]<<" ";
    for(int i = 0; i<=ind+1; i++) if(i != ind) cout<<v[i]<<" ";
    cout<<endl;
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