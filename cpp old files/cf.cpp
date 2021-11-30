#include<iostream>
using namespace std;
int main(){
	int q;
	cin>>q;
	int b[q];
	for(int j=0;j<q;j++){
	int n;
	cin>>n;
	int a[n],sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%n==0) b[j]=sum/n;
	else b[j]=sum/n+1;
	}
	for(int k=0;k<q-1;k++){
		cout<<b[k]<<"\n";
	}
	cout<<b[q-1];
	return 0;
}
