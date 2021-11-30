#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a=3,ans;
    	while(true)
    	{
    	    if(n%a==0) {ans=n/a;break;}
    	    else a=2*a+1;
    	}
    	cout<<ans<<"\n";
	}
    return 0;
}
 
