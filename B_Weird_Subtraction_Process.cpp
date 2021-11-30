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

// void calcb(ll &a, ll &b) {
//     if(a==0 || b==0) return;
//     b = b%(2*a);
//     calca(a,b);
//     return;
// }

// void calca(ll &a, ll &b) {
//     if(a==0 || b==0) return;
//     a = a%(2*b);
//     calcb(a,b);
//     return;
// }

void solve() {
	ll m,n;
    cin>>m>>n;
    while(true) {
        if(m==0 || n==0) break;
        if(m>=2*n) {
            m %= 2*n;
        }
        else if(n>=2*m) {
            n %= 2*m;
        }
        else break;
    }
    cout<<m<<" "<<n<<endl;
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