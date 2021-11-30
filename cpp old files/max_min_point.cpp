#include<iostream>
using namespace std;
int max(int*,int*,int*);
int min(int*,int*,int*);
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"\nmax - "<<max(&a,&b,&c);
	cout<<"\nmin - "<<min(&a,&b,&c);
	return 0;
}
int max(int* x,int* y,int* z)
{
	int	max=*x;
	if(*y>max) max=*y;
	if(*z>max) max=*z;
	return max;
}
int min(int* x,int* y,int* z)
{
	int min=*x;
	if(*y<min) min=*y;
	if(*z<min) min=*z;
	return min;
}

