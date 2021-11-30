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

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin>>n;
	vector<int> ans;
    ll pro=1;
	for(int i=1;i<n;i++) {
		if(__gcd(i,n)==1) {
            ans.pb(i);
            pro = (pro*i)%n;
        }
	}
    if(pro==n-1 && n!=2) ans.pop_back();
    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<" ";
	return 0;
}