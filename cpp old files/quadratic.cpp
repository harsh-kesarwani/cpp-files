#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,D;
	cout<<"Enter the coefficients of quadratic equation\n";
	cin>>a>>b>>c;
	if(a<0)
	cout<<"coefficient of x^2 cannot be zero.";
	else
	{
	cout<<"Quadratic Equation is "<<a<<"x*x + "<<b<<"x + "<<c<<" = 0";
	D=b*b-4*a*c;
	if(D>0)
	{
		cout<<"\nRoots are real and distinct\n";
		cout<<"r1 = "<<(-b+sqrt(D))/2*a<<endl;
		cout<<"r2 = "<<(-b-sqrt(D))/2*a<<endl;
	}
	else if(D<0)
	{
		cout<<"\nRoots are imaginary\n";
		cout<<"r1 = "<<(-b/2*a)<<" + "<<sqrt(-D)/2*a<<"i"<<endl;
		cout<<"r2 = "<<(-b/2*a)<<" - "<<sqrt(-D)/2*a<<"i"<<endl;
	}
	else
	{
		cout<<"\nRoots are real and equal\n";
		cout<<"r1 = r2 = "<<-b/2*a;
	}
	}
	return 0;
}
