#include<iostream>
using namespace std;
int multiplesum(int,int);
int main()
{
	int n=999;
	cout<<multiplesum(n,3)+multiplesum(n,5)-multiplesum(n,15);
	return 0;
}
int multiplesum(int a, int b)
{
	int p,s;
	p=a/b;
	s=(b*p*(p+1))/2;
	return s;
}
