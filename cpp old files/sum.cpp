#include<iostream>
using namespace std;
int main()
{
	int i,fact=1;
	cout<<"Enter a number - ";cin>>i;
	while(i>=1)
	{
	fact*=i;
	i--;
	}
	cout<<fact;
}
