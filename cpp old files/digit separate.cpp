#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,l=0;
	cout<<"Enter a number : ";cin>>n;
	while(n>0)
	{n/=10;l++;}
	int d[l],a[l],b[l];
	for(int i=0;i<l;i++)
	{
		a[i]=n/pow(10,i);
		b[i]=n/pow(10,i+1);
		d[i]=a[i]+10*b[i];		//d[i]=digit(i+1)	
		cout<<"Digit "<<i+1<<" = "<<d[i]<<endl;
	}
	return 0;
}

