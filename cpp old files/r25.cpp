#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

void show(vector<int> v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v;
    int n;
    cin>>n;
    int input;
    for(int i=0;i<n;i++) {
    	cin>>input;
		v.push_back(input);
	}
	show(v);
	sort(v.rbegin(),v.rend());
	show(v);
	sort(v.begin(),v.end());
    show(v);
	return 0;
}
 
