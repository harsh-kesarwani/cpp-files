#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

void print_array(vector<int> v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    	cin>>v[i];
    cout<<"Initial Array - ";
    print_array(v);
    cout<<"Sorted Array - ";
    print_array(v);
    return 0;
}
 
