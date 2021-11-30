#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    vi v;
    int n=52;
    for(int i=0;i<n;i++) {
    	v.push_back(i+1);
    	cout<<v[i]<<" "<<v.size()<<" "<<v.capacity()<<endl;
	}
	cout<<endl;
	v.resize(105);
	cout<<"v.size() = "<<v.size()<<" v.capacity() = "<<v.capacity();
	cout<<endl;
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"v.size() = "<<v.size()<<" v.capacity() = "<<v.capacity();
	return 0;
}
