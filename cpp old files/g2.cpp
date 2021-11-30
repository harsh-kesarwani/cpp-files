#include<iostream>
using namespace std;
long long int factorial(int);
int main()
{
	int n;
	cout<<"Enter a positive integer : ";cin>>n;
	cout<<"Factorial of "<<n<<" is "<<factorial(n);
	return 0;
}
long long int factorial(int x)
{
	long long int fact=1;
	for(int i=1;i<=x;i++)
	{fact=fact*i;}
	return fact;
}
