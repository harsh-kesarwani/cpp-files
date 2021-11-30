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
	ll a,b;
    cin>>a>>b;
    if(a==b) {
        cout<<"0 0"<<endl;
        return;
    }
    if(a>b) swap(a,b);
    ll k = b-a;
    if(k>=a) {
        cout<<k<<" "<<min(a,k-a)<<endl;
    }
    else {
        ll n = a%k;
        cout<<k<<" "<<min(n,k-n)<<endl;
    }
    return;
}

// void solve() {
//     ll a,b;
//     cin>>a>>b;
//     ll dif = abs(a-b);
//     ll moves = (dif==0 ? 0 :a%dif);
//     cout<<dif<<" "<<min(moves,dif-moves)<<endl;
// }

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