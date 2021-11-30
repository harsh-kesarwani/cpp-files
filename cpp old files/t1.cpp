#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *p;
	p=a;
	cout<<p<<endl<<endl;
	cout<<a<<endl<<a+1<<endl<<a+2<<endl<<a+3<<endl<<a+4<<endl<<a+5;
	cout<<endl<<endl;
	cout<<p<<endl<<p+1<<endl<<p+2<<endl<<p+3<<endl<<p+4<<endl<<p+5;	
	return 0;
}
