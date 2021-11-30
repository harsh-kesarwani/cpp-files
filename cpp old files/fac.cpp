#include<iostream>
using namespace std;
int main(){
	unsigned long long n,fac,i;
	while(true){
	fac=1;
	cin>>n;
	for(i=2;i<=n;i++){
		fac*=i;
	}
	cout<<fac<<"\n";
	}
	return 0;
}
