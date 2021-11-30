#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,size=0;
		cin>>n;
		for(int i=2;i<=n;i++)
		{
			if(isPrime(i)) size++;
		}
		int prime[size];
		for(int i=2,j=0;i<=n;i++)
		{
			if(isPrime(i))
			{
				prime[j]=i;
				j++;	
			}
		}
		int a[size];
		long long N=1;
		for(int i=0;i<size;i++)
		{
			if(prime[i]<=sqrt(n)) a[i]=floor((log(n))/log(prime[i]));
			else a[i]=1;
			N*=pow(prime[i],a[i]);
		}
		cout<<N<<endl;
	}
	return 0;
}
bool isPrime(int a)
{
	if(a==2||a==3) return true;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0) return false;
	}
	return true;
}
