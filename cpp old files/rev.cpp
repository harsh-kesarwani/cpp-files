#include<iostream>
using namespace std;
int rev(int x)
{
	int a,r=0;
	while(x>0)
	{
	a=x%10;
	r=r*10+a;
	x/=10;
	}
	return r;
}
int main()
{
	int n;
	cout<<"Enter a number - ";cin>>n;
	cout<<"Reverse - "<<rev(n);
	return 0;
}
