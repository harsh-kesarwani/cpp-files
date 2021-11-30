#include<iostream>
using namespace std;
int main()
{
	int n,a,sum=0,num,len=3;
	cout<<"Enter a three digit number - ";cin>>n;
	num=n;
	for(int i=1;i<=len;i++)
	{
		a=num%10;
		int mul=1;
		for(int k=1;k<=len;k++) mul*=a;
		sum+=mul;
		num/=10;
	}
	cout<<sum;
	if(sum==n) cout<<endl<<"Armstrong";
}
