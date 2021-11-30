#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 998244353

const int MAX = 2e5;
int fac[MAX+1];

int powm(int x, int n) {
	if(n==0) return 1;
	ll u=powm(x,n/2);
	(u*=u)%=mod;
	if(n%2) (u*=x)%=mod;
	return u;
}

void factorial() {
	fac[0]=1;
	for(int i=1;i<=MAX;i++)
		fac[i]=(fac[i-1]*1LL*i)%mod;
}

void solve() {
	int n;
    cin>>n;
    vector<int> v(n);
    int mx = 0, cnt = 0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]==mx) cnt++;
        if(v[i]>mx) {
            mx = v[i];
            cnt=1;
        }
    }
    if(cnt>1) {
        cout<<fac[n]<<endl;
        return;
    }
    int mx2=0,cnt2=0;
    for(int i=0;i<n;i++) {
        if(v[i]==mx) continue;
        if(v[i]==mx2) cnt2++;
        if(v[i]>mx2) {
            mx2 = v[i];
            cnt2=1;
        }
    }
    if(mx-mx2>=2) {
        cout<<0<<endl;
        return;
    }
    int ans = (cnt2*1LL*fac[n])%mod;
	ans = (ans*1LL*powm(cnt2+1,mod-2))%mod;
    cout<<ans<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
    factorial();
	while(T--) {
		solve();
	}
	return 0;
}