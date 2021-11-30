#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

vector<int> changed_vector(vector<int> v) {
	vector<int> temp;
	for(int i=0;i<v.size();i++) {
		 if(v[i]==3) continue;
		 else if(v[i]%2==0) temp.push_back(v[i]/2);
		 else temp.push_back(v[i]);
	}
	return temp;
}

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
	vector<int> cv;
	cv=changed_vector(v);
	cout<<endl;
	for(int i=0;i<cv.size();i++) {
		cout<<cv[i]<<" ";
	}
	cout<<endl;
    return 0;
}
 
