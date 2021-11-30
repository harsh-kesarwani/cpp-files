#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m;
    cin>>m;
    int n=0;
    n+=m/10;
	m%=10;
	if(m>=5) {n++;m-=5;}
	n+=m;
	cout<<n<<"\n";
    return 0;
}
 
