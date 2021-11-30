#include<iostream>
using namespace std;
int main()
{
	int calls;
	float bill;
	cout<<"Enter number of calls : ";
	cin>>calls;
	if(calls<=100)
	bill=200;
	else if(calls<=150)
	bill=200+0.6*(calls-100);
	else if(calls<=200)
	bill=200+0.6*50+0.5*(calls-150);
	else
	bill=200+0.6*50+0.5*50+0.4*(calls-200);
	cout<<"Bill - Rs "<<bill;
	return 0;
}
