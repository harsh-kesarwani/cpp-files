#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

#define endl "\n"
#define PI 3.1415926536

int binary_search(vector<int> v, int x, int l, int r) { 
    if(r>=l) { 
        int mid=l+(r-l)/2;
        if(v[mid]==x) return mid;
        if(v[mid]>x) return binary_search(v,x,l,mid-1); 
		return binary_search(v,x,mid+1,r); 
    } 
    return -1; 
} 
  
int main() { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int k;
	cin>>k;
	vector<int> b(k);
	for(int i=0;i<k;i++) {
		cin>>b[i];
	}
    int s = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<k;i++) {
    	cout<<binary_search(arr,b[i],0,s-1)<<' ';	
	} 
    return 0; 
}
