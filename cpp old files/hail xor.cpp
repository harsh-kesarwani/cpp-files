#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
		int n,x;
		cin>>n>>x;
		vector<int> v(n);
		for(auto &z:v) cin>>z;
		vector<int> cnt(30,0);
		for(int i=0;i<n-1;i++) {
			for(int pos=29;pos>=0;pos--) {
				if(!(v[i]&(1<<pos))) continue;
				if(cnt[pos]) {
					v[i]&=~(1<<pos);
					cnt[pos]=0;
					continue;
				}
				if(x) {
					v[i]&=~(1<<pos);
					cnt[pos]=1;
					x--;
				}
			}
		}
		for(int pos=29;pos>=0;pos--) {
			if(cnt[pos]) {
				v[n-1]^=(1<<pos);
			}
		}
		if(x==1 || (x%2 && n==2)) {
			v[n-1]^=1;
			v[n-2]^=1;
		}
		for(auto z:v) cout<<z<<" ";
		cout<<endl;
	}
	return 0;
}
