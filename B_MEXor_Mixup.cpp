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

const int N = 4e5;
vector<int> v(N);

void calc() {
    int x = 0;
    for(int i=0;i<N;i++) {
        x^=i;
        v[i]=x;
    }
}

void solve() {
	int a,b;
    cin>>a>>b;
    int xr = v[a-1];
    if(xr == b) {
        cout<<a<<endl;
        return;
    }
    int nxr = xr^b;
    if(nxr == a) cout<<a+2<<endl;
    else cout<<a+1<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
    calc();
	while(T--) {
		solve();
	}
	return 0;
}