#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

#define mod 1000000007
#define modd 998244353
#define PI 3.1415926535897932384626
#define eps 1e-6

#define rep(i,a,b) for(int i=a;i<b;i++)
#define sq(x) (x)*(x)
#define all(v) v.begin(),v.end()
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define endl '\n'
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mpr make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define bs binary_search

int dy[]={0,-1,0,1};
int dx[]={-1,0,1,0};

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
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
		
	}
	cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
	return 0;
}

// clock_t start, end;
// start = clock();
// end = clock();
// cout<<double(end - start) / double(CLOCKS_PER_SEC);