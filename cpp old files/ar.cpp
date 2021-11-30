#include<iostream>
using namespace std;
int main()
{
	int a[10],n,m=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter: ";
	cin>>n;
	for(int j=0;j<10;j++)
	{
		if(a[j]==n) m++;
	}
	if(m>0)
		cout<<"Present";
	else
		cout<<"Absent";
	return 0;
}
