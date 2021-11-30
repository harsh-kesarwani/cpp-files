#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007
#define PI acos(-1.0)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++) {
		int k;cin>>k;
		s.insert(k);
	}
	for(auto x:s) cout<<x<<" ";
	cout<<endl;
	int del;
	cin>>del;
	s.erase(del);
	for(auto x:s) cout<<x<<" ";
    return 0;
}
