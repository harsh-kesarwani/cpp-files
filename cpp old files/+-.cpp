#include<iostream>
using namespace std;
int main()
{
	int pos=0,neg=0,zero=0,a;
	char ch;
	do
	{
	cout<<"\nEnter number : ";
	cin>>a;
	if(a>0) pos++;
	else if(a<0) neg++;
	else zero++;
	cout<<"Do you want to continue(y/n)? ";cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"\nNo. of positive numbers - "<<pos<<endl;
	cout<<"No. of negative numbers - "<<neg<<endl;
	cout<<"          No. of zeroes - "<<zero<<endl;
}
