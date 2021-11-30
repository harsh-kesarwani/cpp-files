#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--) {
    	int n;
    	cin>>n;
    	int m=log2(n);
    	for(int i=m;i>=0;i--) {
    		cout<<(n>>i&1);
		}
		cout<<endl;
	}
    return 0;
}
