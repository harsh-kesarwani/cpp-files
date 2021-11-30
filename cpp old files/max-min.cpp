#include<iostream>
using namespace std;
int main()
{
	int max=0,min=0,a;
	char ch;
	cout<<sizeof(a);
	do
	{
	cout<<"\nEnter number : ";
	cin>>a;
	if(a>max) max=a;
	if(a<min) min=a;
	cout<<"Do you want to continue(y/n)? ";cin>>ch;
	}while(ch=='y'||ch=='Y');
	cout<<"\nMaximum - "<<max<<endl;
	cout<<"Minimum - "<<min;
	return 0;
}
