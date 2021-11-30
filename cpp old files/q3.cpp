#include<iostream>
using namespace std;
int main()
{
	int a,j;
	cin>>a;
	int b[a];
	for(j=0;j<a;j++)
	{
	int c,m,x,k;
	cin>>c>>m>>x;
	if(c>m)
	{
		if(c-m+x>=m) b[j]=m;
		else
		{
			if((c-2*m+x)%3==0) k=(c-2*m+x)/3;
			else k=(c-2*m+x)/3+1;
			b[j]=c-k;
		}
	}
	else if(m>c)
	{
		if(m-c+x>=c) b[j]=c;
		else
		{
			if((m-2*c+x)%3==0) k=(m-2*c+x)/3;
			else k=(m-2*c+x)/3+1;
			b[j]=c-k;
		}
	}
	else
	{
		if(x>=c) b[j]=c;
		else 
		{
			if((c-x)%3==0) k=(c-x)/3;
			else k=(c-x)/3+1;
			b[j]=c-k;
		}
	}
	}
	for(j=0;j<a-1;j++)
	{cout<<b[j]<<endl;}
	cout<<b[a-1];
	return 0;
}
