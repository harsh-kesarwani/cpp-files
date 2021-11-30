#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl "\n"
#define PI 3.1415926536

int binary_search(const vector<int> &v, int x, int l, int r) {
	while(r>=l) {
		int mid=(l+r)/2;
		if(x==v[mid]) return mid;
		else if(x<v[mid]) r=mid-1;
		else l=mid+1;		
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int k;
	cin>>k;
	vector<int> b(k);
	for(int i=0;i<k;i++) {
		cin>>b[i];
	}
	for(int i=0;i<k;i++) {
		cout<<binary_search(a,b[i],0,a.size()-1)<<' ';
	}
	return 0;
}
