#include<iostream>
using namespace std;
float average(float [],int);
int main()
{
	int size;
	float avg;
	cout<<"Enter the size of array - ";cin>>size;
	float a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Element a["<<i<<"] = ";
		cin>>a[i];
	}
	avg=average(a,size);
	cout<<endl<<endl<<"Average = "<<avg;
	return 0;
}
float average(float a[], int size)
{
	float sum=0,ave;
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	ave=sum/size;
	return ave;
}
