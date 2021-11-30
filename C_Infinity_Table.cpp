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
	int k;
    cin>>k;
    int p=sqrt(k);
    if(p*p==k) p-=1;
    int r=0, c=p+1;
    int d = k-p*p;
    if(d<=p+1) r+=d;
    else {
        d-=(p+1);
        r=p+1;
        c-=d;
    }
    cout<<r<<" "<<c<<endl;
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