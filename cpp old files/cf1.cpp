#include<iostream>
using namespace std;
int main(){
	int n,k,q,sum=0;
	cin>>n>>k;
	q=min(n,k);
	int a[n],b[q];
	for(int j=0;j<q;j++){
		b[j]=0;
	}
	cin>>a[0];
	b[0]=a[0];
	for(int i=1;i<n;i++){
		cin>>a[i];
		if(i>=q){
			
		}
	}
	for(int k=0;k<q;k++){
		if(b[k]!=0) sum++;
	}
	cout<<sum<<"\n";
	for(int k=0;k<q-1;k++){
		if(b[k]!=0) cout<<b[k]<<" ";
	}
	if(b[q-1]!=0) cout<<b[q-1];
	return 0;
}
