#include<iostream>
using namespace std;
int main(){
	long long a,b,r=1,s=1;
	cin>>a>>b;
	for(int i=0;i<b;i++)
	r*=a;
	for(int i=0;i<a;i++)
	s*=b;
	cout<<r-s;
	return 0;
}
