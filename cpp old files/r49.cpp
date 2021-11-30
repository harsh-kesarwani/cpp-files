#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

ll program_solution(ll x, ll y, ll l, ll r) {
	if(x==0||y==0) return 0;
	ll ans=x|y;
	int n=floor(log(ans)/log(2))+1;
	while(ans>r) {
		ans&=~(1<<(n-1));
		n--;
	}
	return ans;

}

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(true) {
    	ll x=rand()%10;
    	ll y=rand()%10;
    	ll l=0;
    	ll r=rand()%10;
    	cout<<"x="<<x<<" y="<<y<<" l="<<l<<" r="<<r<<endl;
    	if(brute_force_solution(x,y,l,r)==program_solution(x,y,l,r)) cout<<"OK\n";
    	else {
    		cout<<"Wrong Answer\nBrute Force - "<<brute_force_solution(x,y,l,r)<<" Program - "<<program_solution(x,y,l,r);
    		break;
		}
	}
    return 0;
}
 
