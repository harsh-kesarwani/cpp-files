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
    while(t--) {
    	ll x,y,l,r;
    	cin>>x>>y>>l>>r;
    	ll ans=x|y;
    	int n=floor(log(ans)/log(2))+1;
    	while(ans>r) {
    		ans&=~(1<<(n-1));
    		n--;
		}
    	cout<<ans<<endl;
	}
    return 0;
}
 
