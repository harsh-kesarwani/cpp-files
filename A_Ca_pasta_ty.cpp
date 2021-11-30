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

int solve() {
	int n,k;
    cin>>n>>k;
    vector<int> s(k),x(k),y(k);
    
    for(auto &z:s) cin>>z;
    int as,bs,cs,ds;
    cin>>as>>bs>>cs>>ds;
    
    for(auto &z:x) cin>>z;
    int ax,bx,cx,dx;
    cin>>ax>>bx>>cx>>dx;
    
    for(auto &z:y) cin>>z;
    int ay,by,cy,dy;
    cin>>ay>>by>>cy>>dy;

    return n+k-1;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
    int cs = 0;
	while(T--) {
		cout<<"Case #"<<++cs<<": ";
        cout<<solve();
        cout<<endl;
	}
	return 0;
}