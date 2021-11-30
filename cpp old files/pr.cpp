#include<iostream>
#include<cmath>
bool isprime(int);
using namespace std;
int main(){
	int u,v;
	cin>>u>>v;
	cout<<isprime(u)<<" "<<isprime(v);
}
bool isprime(int a){
	int d=0,sq;
	sq=sqrt(a);
	for(int j=2;j<=sq;j++){
		if(a%j==0){
			d++;
			break;
		}
	}
	if(d==0) return true;
	else return false;
}
