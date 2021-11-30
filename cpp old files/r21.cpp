#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool is_present(int a, vector<int> &v) {
	int low=0;
	int high=v.size()-1;
	while(low<=high) {
		int mid=(low+high)/2;
		if (a==v[mid]) {
			v[mid]=0;
			return true;
		}
		if(a<v[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(3);
	cout<<is_present(3,vec)<<endl;
	for(int i=0;i<vec.size();i++) {
		cout<<vec[i]<<" ";
	}

    return 0;
}
 
