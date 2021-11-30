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
bool approach3(int d0, int d1, ll k) {
	int tmp;
	tmp = d0 + d1;

	assert(k >=2 and k <= 1e12);
	assert(d0 >= 1 and d0 <= 9);
	assert(d1 >= 0 and d1 <= 9);
	
	ll ans = tmp;
	ll sum = (2*tmp) % 10 + (4*tmp) % 10 + (8*tmp) % 10 + (6*tmp) % 10;

	k -= 2;

	if(k > 0) {
		ans += (tmp % 10);
		k--;
	}

	ans += (k / 4) * sum;

	k %= 4;

	int p = 2;
	while(k--) {
		ans += (p*tmp) % 10;
		p = (p * 2) % 10;
	}

	if((ans % 3) == 0)	return true;
	else return false;	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true) {
    	ll k=rand()+2;
	   	int d0=rand()%9+1;
    	int d1=rand()%10;
    	cout<<k<<" "<<d0<<" "<<d1<<endl;
    	//bool a1=approach1(d0,d1,k);
		bool a2=approach2(d0,d1,k);
		bool a3=approach3(d0,d1,k);
		if(a3==a2) cout<<"OK\nans = "<<a3<<" a2 = "<<a2<<endl<<endl;
		else {
			cout<<"Wrong Answer:\ans = "<<a3<<" a2 = "<<a2<<endl;
			break;	
		}
	}
	return 0;
}
 
