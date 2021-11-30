#include<iostream>
using namespace std;
void display(int* a)
{
	cout<<*a;
}
int main()
{
	int x;
	cin>>x;
	display(&x);
	return 0;
}
