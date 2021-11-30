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
	int n,c;
    cin>>n>>c;
    vector<int> a(n), b(n-1);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    int days=0,tug=0,x=0,ans=ceil((double)c/a[0]);
    while(x<n-1 && tug<c) {
        days++;
        if(tug>=b[x]) {
            tug-=b[x];
            x++;
            int req = ceil((double)(c-tug)/a[x]);
            ans=min(ans,days+req);
        }
        else tug+=a[x];
    }
    cout<<ans<<endl;
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