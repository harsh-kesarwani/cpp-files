#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int binary_search(vector<int> v, int a, int l, int r) {
	if(l>r) return -1;
	int mid=(l+r)/2;
	if(a==v[mid]) return mid;
	else if(a>v[mid]) return binary_search(v,a,mid+1,r);
	else return binary_search(v,a,l,mid-1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
    	cin>>v[i];
	}
	cout<<binary_search(v,m,0,n-1)<<endl;
    return 0;
}
 
