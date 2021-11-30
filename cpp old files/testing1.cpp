#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	const int l=4;
	cin>>n;
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

