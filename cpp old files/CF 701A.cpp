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

int cal(int a, int b) {
	if(b==1) return INT_MAX;
	int ans = 0;
	while(a) {
		a/=b;
		ans++;
	}
	return ans;
}

int main() {
	io();
	int T;
	cin>>T;
	while(T--) {
		int a,b;
		cin>>a>>b;
		int ans = cal(a,b);
		for(int i=1;i<10;i++) {
			ans = min(ans,i+cal(a,b+i));
		}
		cout<<ans<<endl;
	}
	cerr<<"Time: "<<1000*((double)clock())/CLOCKS_PER_SEC<<"ms\n";
	return 0;
}