#include <bits/stdc++.h>
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

bool odd(string s, string t) {
	map<char,int> m;
	for(char x:s) m[x]++;
	for(char x:t) m[x]++;
	for(auto x:m)
		if(x.second%2)
			return true;
	return false;
}

int main() {
	io();
	
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		if(odd(s,t)) {
			cout<<"No\n";
			continue;
		}
		cout<<"Yes\n";
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++) {
			if(s[i]!=t[i]) {
				int j;
				for(j=i+1;j<n;j++) {
					if(s[j]==t[i]) {
						swap(s[j],t[i]);
						v.pb(mp(j+1,i+1));
						break;
					}
				}
				if(j==n) {
					for(j=i+1;j<n;j++) {
						if(t[j]==t[i]) {
							swap(s[j],t[j]);
							swap(s[j],t[i]);
							v.pb(mp(j+1,j+1));
							v.pb(mp(j+1,i+1));
							break;
						}
					}
				}
			}
		}
		cout<<v.size()<<endl;
		for(auto x:v)
			cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}

