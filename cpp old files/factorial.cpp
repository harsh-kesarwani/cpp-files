#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cout<<"Enter a number - ";cin>>n;
	cout<<n<<"! = "<<fact(n);
	return 0;
}
int fact(int a)
{
	if(a==0||a==1) return 1;
	else return a*fact(a-1);
}
