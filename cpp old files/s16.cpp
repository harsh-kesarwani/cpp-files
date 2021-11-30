#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007
#define PI acos(-1.0)

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v) cin>>x;
	sort(v.begin(),v.end());
	for(auto x:v) cout<<x<<" ";
	cout<<endl;
	while(true) {
		int val;
		cin>>val;
		auto it=lower_bound(v.begin(),v.end(),val);
		if(it==v.end()) cout<<"end\n";
		else cout<<*it<<endl;
	}
    return 0;
}
