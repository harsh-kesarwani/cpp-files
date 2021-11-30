#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c;
	cin>>n;
	c=a+b;
	while(c<n)
	{
		cout<<c<<endl;
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
