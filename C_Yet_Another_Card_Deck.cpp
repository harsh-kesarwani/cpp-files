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
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    map<int,int> pos;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(!pos[v[i]]) pos[v[i]]=i+1;
    }
    // for(auto x:pos) cout<<x.ff<<" "<<x.ss<<endl;
    // cout<<endl;
    for(int i=0;i<q;i++) {
        int k;
        cin>>k;
        cout<<pos[k]<<" ";
        for(auto &x:pos) {
            if(x.ss<pos[k]) x.ss++;
        }
        pos[k]=1;

        // for(auto x:pos) cout<<x.ff<<" "<<x.ss<<endl;
        // cout<<endl;
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