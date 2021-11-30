#include<iostream>
using namespace std;
int main()
{
	int in,ft,l;
	float cm;
	const float in_cm=2.54;
	const int ft_in=12;
	cout<<"  Feet - ";cin>>ft;
	cout<<"Inches - ";cin>>in;
	l=ft*ft_in+in;
	cm=l*in_cm;
	cout<<endl<<"Centimeters - "<<cm;
	return 0;
}
