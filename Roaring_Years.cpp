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

bool roaring(ll y) {
	string year = to_string(y);
	int n = year.size();
	if(n==1) return false;
	for(int i=0;i<n/2;i++) {
		if(year[i+1]=='0') continue;
		string first = year.substr(0,i+1);
        ll cur = stoll(first);
		while(first.size()<year.size()) {
			first+=to_string(++cur);
		}
        if(first==year) return true;
	}
	return false;
}

void solve() {
	ll y;
	cin>>y;
	y++;
	while(!roaring(y)) y++;
	cout<<y<<endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	int cs=0;
	while(T--) {
		cout<<"Case #"<<++cs<<": ";
		solve();
	}
	return 0;
}