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
		int n;
		cin>>n;
		vector<int> v(n),cnt(n+1,0);
		for(auto &x:v) {
			cin>>x;
			cnt[x]++;
		}
		string ans(n,'0');
		int i=0,j=n-1;
		for(int k=n-1;k>=0;k--) {
			int val=n-k;
			if(cnt[val]==0) break;
			if(val==1) ans[k]='1';
			if(val>1) {
				if(v[i]==val-1) {
					ans[k]='1';
					i++;
				}
				else if(v[j]==val-1) {
					ans[k]='1';
					j--;
				}
				else break;
			}
			if(cnt[val]>1) break;
		}
		bool ok=true;
		for(int i=1;i<=n;i++) {
			if(cnt[i]!=1) ok=false;
		}
		if(ok) ans[0]='1';
		cout<<ans<<endl;
	}
	return 0;
}