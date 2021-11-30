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

const int MAX = 2e5;
int fac[MAX+1];

void factorial() {
	fac[0]=1;
	for(int i=1;i<=MAX;i++)
		fac[i]=(fac[i-1]*1LL*i)%mod;
}

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int nd = ~0;
    for(auto &x:v) {
        cin>>x;
        nd &= x;
    }
    ll cnt = count(all(v),nd);
    if(cnt<2) {
        cout<<0<<endl;
        return;
    }
    ll ans = cnt*(cnt-1)%mod;
    cout<<(ans*fac[n-2])%mod<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
    factorial();
	while(T--) {
		solve();
	}
	return 0;
}