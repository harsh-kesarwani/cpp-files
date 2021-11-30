#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int *p;
	p=a;
	for(int i=0;i<5;i++)
	{
		cout<<"*(p+"<<i<<") = "<<*(p+i)<<endl;
	}
	cout<<endl<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"a["<<j<<"] = "<<a[j]<<endl;
	}
}
