#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int);
int main()
{
	long long ans,i,n=600851475143;
	for(i=0;i<=sqrt(n);i++)
	{
		if(isprime(i)&&n%i==0)
		ans=i;
	}
	cout<<i;
	return 0;
}
bool isprime(int a)
{
	for(int i=0;i<=sqrt(a);i++)
	{
		if(i%b==0) r=i;
	}
	return
}

