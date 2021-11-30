#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007
#define PI acos(-1.0)

int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v) cin>>x;
	for(int i=0;i<n;i++) cout<<i<<" ";
	cout<<endl;
	cout<<"Partial sort : "<<endl;
	for(int i=1;i<=n;i++) {
			vector<int> w=v;
			partial_sort(w.begin(),w.begin()+i,w.end());
			for(auto x:w) cout<<x<<" ";
			cout<<"(ps upto i = "<<i<<")";
			cout<<endl;
	}
	cout<<"Sort : "<<endl;
	for(int i=1;i<=n;i++) {
			vector<int> w=v;
			sort(w.begin(),w.begin()+i);
			for(auto x:w) cout<<x<<" ";
			cout<<"(ps upto i = "<<i<<")";
			cout<<endl;
	}
	
    return 0;
}
