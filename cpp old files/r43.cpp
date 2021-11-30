#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main() {
	int n;
	cin>>n;
	vector<int> v;
	while(n) {
		v.push_back(n%2);
		n/=2;
	}
	for(int i=v.size()-1;i>=0;i--) {
		cout<<v[i];
	}
	cout<<endl;
    return 0;
}
 
