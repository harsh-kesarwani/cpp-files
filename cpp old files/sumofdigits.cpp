#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,a;
	cout<<"Enter a number - ";cin>>num;
	while(num>0)
	{
		a=num%10;
		sum+=a;
		num=num/10;
	}
	cout<<"Sum of digits - "<<sum;
	return 0;
}
