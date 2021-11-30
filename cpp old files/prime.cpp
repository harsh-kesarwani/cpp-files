#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	bool flag=false;
	cout<<"Enter a positive number - ";
	cin>>num;
	if(num==1) cout<<num<<" is neither prime nor composite.";
	else if(num==2||num==3) cout<<num<<" is prime.";
	else
	{
	int sq=sqrt(num);
	for(int i=2;i<=sq;i++)
	{
		if(num%i==0) {flag=true;break;}
	}
	if(flag) cout<<num<<" is not prime.";
	else cout<<num<<" is prime.";
	}
	return 0;
}
