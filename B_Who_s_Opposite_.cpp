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
	int a,b,c;
    cin>>a>>b>>c;
    int n = abs(a-b);
    if(a>2*n || b>2*n || c>2*n) {
        cout<<-1<<endl;
        return;
    }
    if(c>n) cout<<c-n<<endl;
    else cout<<c+n<<endl;
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