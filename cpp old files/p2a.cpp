#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c=2,limit=4000000,sum=0;
	while(c<limit)
	{
	if(c%2==0) sum+=c;
	a=b+c;
	b=c+a;
	c=a+b;
	}
	cout<<sum;
	return 0;
}
