#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,max,prime;
		cin>>n;
		for(prime=2;prime<=n;prime++)
		{
			while(n%prime==0)
			{
				max=prime;
				n/=prime;
			}
		}
		cout<<max;
	}
	return 0;
}
