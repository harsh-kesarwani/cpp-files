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

int sod(ll n) {
    int ans=0;
    while(n) {
        ans+=n%10;
        n/=10;
    }
    return ans;
}

ll solve() {
	ll n,s;
    cin>>n>>s;
    ll m=n,mul=1;
    while(sod(n)>s) {
        n/=10;
        n+=1;
        mul*=10;
    }
    return n*mul-m;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		cout<<solve()<<endl;
	}
	return 0;
}