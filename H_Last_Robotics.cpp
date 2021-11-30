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
	ll n;
    cin>>n;
    int cnt=0;
    while(n%2==0) {
        n/=2;
        cnt++;
    }
    while(n) {
        if(n&1) cnt++;
        n/=2;
    }
    cout<<(cnt%2 ? "Red" : "Blue")<<endl;
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