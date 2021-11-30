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
    string s;
    cin>>n>>q>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        if(s[i]=='+') v[i]=1;
        else v[i]=-1;
        if(i%2) v[i]*=-1;
    }
    vector<int> sum(n+1);
    sum[0]=0;
    for(int i=1;i<=n;i++) {
        sum[i]=sum[i-1]+v[i-1];
    }
    for(int i=0,l,r;i<q;i++) {
        cin>>l>>r;
        int s = sum[r]-sum[l-1];
        if(s==0) cout<<0<<endl;
        else if(s%2) cout<<1<<endl;
        else cout<<2<<endl;
    }
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