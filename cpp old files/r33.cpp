#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

bool approach1(int d0, int d1, ll k) {
	ll sum=d0+d1;
	k-=2;
	while(k--) 
	    sum+=sum%10;
    if(sum%3==0) return true;
    else return false;
}

bool approach2(int d0, int d1, ll k) {
	ll sum=d0+d1;
	if(k>=24) k-=12*((k/12)-1);
	k-=2;
	while(k--) 
	    sum+=sum%10;
    if(sum%3==0) return true;
    else return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true) {
    	ll k=rand()*rand()+2;
    	int d0=rand()%9+1;
    	int d1=rand()%10;
    	cout<<k<<" "<<d0<<" "<<d1<<endl;
    	bool a1=approach1(d0,d1,k);
		bool a2=approach2(d0,d1,k);
		if(a1==a2) cout<<"OK\n";
		else {
			cout<<"Wrong Answer:\na1 = "<<a1<<" a2 = "<<a2<<endl;
			break;	
		}
	}
	return 0;
}
 
