#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

ll brute_force_solution(ll x, ll y, ll l, ll r) {
	ll mx=0,ans=0;
	for(ll i=l;i<=r;i++) {
		if(((x&i)*(y&i))>mx) {
			mx=(x&i)*(y&i);
			ans=i;
		}
	}
	return ans;
}
ll brute_force_solution1(ll x, ll y, ll l, ll r) {
	ll mx=0,ans=0;
	for(ll i=l;i<=r;i++) {
		if(((x&i)*(y&i))>mx) {
			mx=(x&i)*(y&i);
			ans=i;
		}
	}
	return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x=11;
    ll y=50;
    ll l=0;
    ll r=200;
    for(int z=l;z<=r;z++) {
    	cout<<z<<" "<<(x&z)*(y&z)<<"\n";
	}
    return 0;
}
 
