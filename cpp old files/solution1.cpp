#include <bits/stdc++.h>
using namespace std;

typedef long long 		ll;
typedef vector<int> 	vi;
typedef vector<ll> 		vll;
typedef pair<int,int> 	pii;
typedef pair<ll,ll> 	pll;
typedef vector<pii> 	vpii;
typedef vector<pll> 	vpll;
typedef vector<vi> 		vvi;
typedef vector<vll> 	vvll;

#define endl 	'\n'
#define mod 	1000000007
#define PI 		3.1415926535897932384626
#define pb 		push_back
#define mp 		make_pair
#define all(x) 	x.begin(),x.end()

void io() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	io();
	
	int T;
	cin>>T;
	while(T--) {
		int n,m,k;
		cin>>n>>m>>k;
		int hi=min(n/k,m);
		int rem=m-hi;
		int d=(rem+k-1-1)/(k-1);
		cout<<hi-d<<endl;
	}
	return 0;
}