#include<iostream>
using namespace std;
int main()
{
	char name[20];
	cin.getline(name,20);
	cout<<name<<endl;
	char *p;
	p=name;
	while(*p!='\0')
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
