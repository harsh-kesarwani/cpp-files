#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	io();
	int n,q,k;
	cin>>n>>q>>k;
	vector<int> v(n+2);
	v[0]=0;
	v[n+1]=k+1;
	for(int i=1;i<=n;i++) cin>>v[i];
	vector<int> pos(n+1,0);
	for(int i=1;i<=n;i++) {
		pos[i]=v[i+1]-v[i-1]-2;
	}
	for(int i=1;i<=n;i++) {
		pos[i]+=pos[i-1];
	}
	for(int i=0;i<q;i++) {
		int l,r;
		cin>>l>>r;
		cout<<pos[r]-pos[l-1]+v[l-1]+(k-v[r+1]+1)<<endl;
	}
	cerr<<"Time: "<<1000*((double)clock())/CLOCKS_PER_SEC<<"ms\n";
	return 0;
}