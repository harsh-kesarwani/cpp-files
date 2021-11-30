#include<iostream>
using namespace std;
int size=100;
int main()

{
float a[size];
void read(float *p,int);
void print(float *p,int);
int k;
cout<<"enter number of data element:";
cin>>k;
float *p=new float[k];
read(p,k);
print(p,k);
delete []p;
}

void read(float *p,int k)
{
for(int i=0; i<k; i++)
{
	cout<<"*(p"<<i<<")";
	cin>>*(p+i);
}
}

void print(float *p,int k)
{
for(int i=0; i<k; i++)
{
	cout<<"*(p"<<i<<")"<<*(p+i)<<"\t";
	
}
}

