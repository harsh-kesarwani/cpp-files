#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int *p=&a;
	cout<<&p;
	return 0;
}
