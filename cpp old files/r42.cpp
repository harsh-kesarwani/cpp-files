#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main() {
	int N;
	cin>>N;
	int n=floor(log(n)/log(2))+1;
	vector<int> v(n);
	for(int i=0;i<n;i++) {
		v[i]=N%2;
		N/=2;
	}
	for(int i=0;i<n;i++) {
		cout<<v[i];
	}
	cout<<endl;
    return 0;
}
 
