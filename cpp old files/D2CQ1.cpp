#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int max_import(int money,vector<int> price,vector<int> value,vector<int> number) {
	int imp=0;
	int n=price.size();
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(value[i]/(double)price[i]<value[j]/(double)price[j]) {
				swap(value[i],value[j]);
				swap(price[i],price[j]);
				swap(number[i],number[j]);
			}
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<number[i];j++) {
			if(price[i]<=money) {
				imp+=value[i];
				money-=price[i];
				if(money==0) return imp;
			}
		}
	}
	return imp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n,money;
	cin>>n>>money;
	vector<int> price(n);
	vector<int> value(n);
	vector<int> number(n);
	for(int i=0;i<n;i++) {
		cin>>price[i];
	}
	for(int i=0;i<n;i++) {
		cin>>value[i];
	}
	for(int i=0;i<n;i++) {
		cin>>number[i];
	}
	int impor = max_import(money,price,value,number);
	cout<<impor<<endl;
    return 0;
}
 
