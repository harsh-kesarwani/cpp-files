#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 

#define endl "\n"
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void show_array(vi v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main() {
    fastio;
    
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
    	cin>>v[i];
    cout<<"Initial Array - ";
    show_array(v);
    sort(v.begin(),v.end());
    cout<<"Sorted Array - ";
	show_array(v);
    int k,input;
    cin>>k;
    while(k--) {
    	cin>>input;
		cout<<binary_search(v.begin(),v.end(),input)<<" ";
	}
    return 0;
}
