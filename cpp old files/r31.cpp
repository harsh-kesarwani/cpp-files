#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++) {
		int imin=i;
		for(int j=i+1;j<n;j++) {
			if(v[j]<v[imin])
				imin=j;
		}
		swap(v[i],v[imin]);
	}
	for(int i=0;i<n;i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
    return 0;
}
 
