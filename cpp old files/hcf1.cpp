#include<iostream>
using namespace std;
int main()
{
	int dividend, divisor, remainder=1,hcf,a,b;
	cout<<"Enter two numbers :\n";
	cin>>dividend>>divisor;
	a=dividend;
	b=divisor;
	while(remainder>0)
	{
	remainder=dividend%divisor;
	if(remainder==0) hcf=divisor;
	else
	{
		dividend=divisor;
		divisor=remainder;
	}
	}
	cout<<"HCF of "<<a<<" and "<<b<<" is "<<hcf;
	return 0;	
}
