#include<iostream>
using namespace std;
int main()
{
	int quan,cost;
	cout<<"Enter quantity - ";
	cin>>quan;
	if(quan>1000)
	cost=90*quan;
	else
	cost=100*quan;
	cout<<"cost - "<<cost;
	return 0;
}
