#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	ll k,d0,d1;
    	cin>>k>>d0>>d1;
    	ll sum=d0+d1;
    	if(k>=24) k-=12*((k/12)-1);
    	k-=2;
    	while(k--) 
    	    sum+=sum%10;
        if(sum%3==0) cout<<"YES\n";
	    else cout<<"N0\n";
	}
	return 0;
}
 
