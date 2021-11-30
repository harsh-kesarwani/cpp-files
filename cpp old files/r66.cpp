#include <bits/stdc++.h> 
using namespace std; 
int count_set_bits(int n) 
{ 
	int cnt=0;
    while(n>0) {
    	cnt+=(n&1);
    	n>>=1;
	}
	return cnt;
} 
int main() 
{ 
	int n;
	cin>>n;
	int m=n;
	int cnt = 0;
	//cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
    while (n=n>>1) {
    	cnt++;
    	cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
	}
    cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
    cout<<endl;
	cnt = 0;
	n=m;
	//cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
    while (n) {
    	cnt++;
    	n>>=1;
    	cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
	}
    cout<<"n = "<<n<<" cnt = "<<cnt<<endl;
	
	return 0; 
}
