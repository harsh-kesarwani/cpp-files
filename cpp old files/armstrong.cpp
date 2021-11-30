#include<iostream>
using namespace std;
int main()
{
	int first,last;
	cout<<"Enter first number - ";cin>>first;
	cout<<"Enter last number - ";cin>>last;
	cout<<"Armstrong numbers between "<<first<<" and "<<last<<" are ";
	for(int i=first;i<=last;i++)
	{
	int sum=0,a,num,num1,len=0;
	num=i;num1=i;
	while(num>0) {num/=10;len++;}
	for(int j=1;j<=len;j++)
	{
	a=num1%10;
	int mul=1;
	for(int k=1;k<=len;k++) mul*=a;
	sum+=mul;
	num1/=10;
	}
	if(sum==i) cout<<i<<" ";
	}
	return 0;
}
