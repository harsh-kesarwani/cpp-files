#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c=0,sum=0,limit=4000000;
	while(c<limit)
	{
	if(c%2==0) sum+=c;
	c=a+b;
	a=b;
	b=c;
	}
	cout<<sum;
	return 0;
}
