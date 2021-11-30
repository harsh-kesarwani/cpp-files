#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long n[t],max[t],prime;
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
		prime=2;
		while(prime<=n[i])
		{
			if(n[i]%prime==0)
			{
				max[i]=prime;
				n[i]/=prime;
			}
			else prime++;
		}
	}
	for(int j=0;j<t-1;j++)
	{
		cout<<max[j]<<"\n";
	}
	cout<<max[t-1];
	return 0;
}
