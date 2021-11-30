#include <bits/stdc++.h>
using namespace std;

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int powm(int x, int n, int m) {
	int res=1;
	while(n) {
		if(n%2==1) res=(res*1LL*x)%m;
		x=(x*1LL*x)%m;
		n/=2;
	}
	return res;
}

int tonelli_shanks(int n, int p) {
	if(powm(n,(p-1)/2,p)==(p-1))
		return -1;
	int s=p-1,e=0;
	while(s%2==0) s/=2,e++;
	int q=2;
	while(true) {
		if(powm(q,(p-1)/2,p)==(p-1))
			break;
	}
	int x=powm(n,(s+1)/2,p);
	int b=powm(n,s,p);
	int g=powm(q,s,p);

	int r=e;
	while(b!=1) {
	    int tt=b;
	    int i=0;
	    while(tt!=1) {
	      tt=(tt*1LL*tt)%p;
	      ++i;
	      if(i==r) return 0;
	    }
	   	int k=powm(g,powm(2,r-i-1,p-1),p);
	    int b2=(k*1LL*k)%p;
	    x=(x*1LL*k)%p;
	    b=(b*1LL*b2)%p;
	    g=b2;
	    r=i;
  }
  if((x*1LL*x)%p==n) return x;
  return 0;
}

int main() {
	io();
	int T;
	cin>>T;
	while(T--) {
		
	}
	cerr<<"Time: "<<1000*((double)clock())/CLOCKS_PER_SEC<<"ms\n";
	return 0;
}
