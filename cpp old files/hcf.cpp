#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,hcf;
	cout<<"Enter two numbers - ";
	cin>>a>>b;
	for(int i=b;i>0;i--)
	{
		if((a%i==0)&&(b%i==0))
		{cout<<"HCF = "<<i;break;}
	}
	return 0;
}
