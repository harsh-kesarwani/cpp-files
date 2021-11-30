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
	}
	for(int i=0;i<t;i++)
	{
        while(n[i]%2==0)
            {
                max[i]=2;
                n[i]/=2;
            }
		prime=3;
		while(prime<=n[i])
		{
			if(n[i]%prime==0)
			{
				max[i]=prime;
				n[i]/=prime; 
			}
			else prime+=2;
		}
	}
	for(int j=0;j<t-1;j++)
	{
		cout<<max[j]<<"\n";
	}
	cout<<max[t-1];
	return 0;
}
