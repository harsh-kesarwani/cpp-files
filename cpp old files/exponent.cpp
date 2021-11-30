#include<iostream>
using namespace std;
int main()
{
	int base,power,answer=1;
	cout<<"Enter base - ";cin>>base;
	cout<<"Enter power- ";cin>>power;
	for(int i=0;i<power;i++)
	answer*=base;
	cout<<"Answer - "<<answer;
	return 0;
}
