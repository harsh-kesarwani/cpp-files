#include <bits/stdc++.h> 
using namespace std; 
int count_set_bits(int n) 
{ 
	int cnt=0;
    while(n>0) {
    	cnt+=(n&1);
    	n>>1;
	}
	return cnt;
} 
int main() 
{ 
	int t=1;
	while(t--){
		cout<<1<<endl;
	}	
	cout<<t;
	return 0; 
}
