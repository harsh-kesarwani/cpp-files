#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void io() {
	ios::sync_with_stdio(0);
	cin.tie(0);
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
	for(int i=10,ind=0;i>=0;i--) {
		int mi = ind, mx = INT_MIN;
		for(int j=ind;j<n;j++) {
			if((v[j] & (1<<i)) && v[j]>mx) {
				mx = v[j];
				mi = j;
			}
		}
		if(mx == INT_MIN) continue;
		swap(v[ind],v[mi]);
		mi = ind;
		for(int j=0;j<n;j++) {
			if(j!=mi && (v[j] & (1<<i)))
				v[j] = v[j]^v[mi];
		}
		ind++;
	}
	int ans = 0;
	for(auto x:v) ans^=x;
	cout<<ans;
	return 0;
}
