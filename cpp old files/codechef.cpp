#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool is_present(int a, vector<int> &v) {
	int low=0;
	int high=v.size()-1;
	int mid=0;
	while(low<=high) {
		mid=(low+high)/2;
		if (a==v[mid]) {
			v[mid]=0;
			return true;
		}
		else if(a<v[mid])
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
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	vector<vector<int> > vec;
		for(int i=0;i<k;i++) {
			vector<int> v1;
			vec.push_back(v1);
		}
		int input;
		vector<int> vsorted;
		for(int i=0;i<n;i++) {
			cin>>input;
			vsorted.push_back(input);
			vec[i%k].push_back(input);
		}
		sort(vsorted.begin(),vsorted.end());
		string s="yes";
		for(int i=0;i<n;i++) {
			if(is_present(vsorted[i],vec[i%k])) continue;
			else {
				s="no";
				break;	
			}
		}
		cout<<s<<endl;
	}
    return 0;
}
 
