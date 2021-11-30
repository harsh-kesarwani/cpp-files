include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair

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
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v) cin>>x;
	ll ans=0;
	int k=8*sizeof(int);
	for(int pos=0;pos<k;pos++) {
		int cnt=0;
		for(int &x:v) {
			cnt+=x&1;
			x>>=1;
		}
		ans+=cnt*(n-cnt)*(1<<pos);
	}
	cout<<ans;
	return 0;
}

