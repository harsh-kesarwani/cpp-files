#include<iostream>
using namespace std;
int main(){
	int n,c,a=0,b=1,sum=1;
	cin>>n;
	for(int i=0;i<n-1;i++){
		c=a+b;
		a=b;
		b=c;
		sum+=c;
	}
	cout<<sum;
	return 0;
}
