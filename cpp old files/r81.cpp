#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0,mx=INT_MIN;
    cout<<"Initial"<<" sum = "<<sum<<" mx = "<<mx<<endl;
    for(int i=0;i<n;i++) {
    	cin>>v[i];
    	sum=max(v[i],sum+v[i]);
    	mx=max(mx,sum);
    	cout<<"v[i] = "<<v[i]<<" sum = "<<sum<<" mx = "<<mx<<endl;
	}
	//cout<<mx;
    return 0;
}

