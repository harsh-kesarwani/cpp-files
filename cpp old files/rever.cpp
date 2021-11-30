#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,a;
	cout<<"Enter a number - ";cin>>num;
	while(num>0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
	cout<<"Reverse number - "<<rev;
	return 0;
}
