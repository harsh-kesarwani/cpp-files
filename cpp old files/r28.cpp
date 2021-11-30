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
    	ll x,y,a,b;
    	cin>>x>>y;
    	cin>>a>>b;
    	ll sum=0;
    	sum+=a*(abs(x-y));
    	if(b>2*a) sum+=(2*a*min(x,y));
    	else sum+=(b*min(x,y));
    	cout<<sum<<endl;
	}
    return 0;
}
 
