#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

vector<int> sum_subarray(vector<int> v, int sum) {
	vector<int> temp;
	int s=0,start=0;
	for(int i=0;i<v.size();i++) {
		s+=v[i];
		while(s>sum&&start<i) {
			s-=v[start];
			start++;
		}
		if(s==sum) {
			for(int k=start;k<=i;k++) {
				temp.push_back(v[k]);
			}
			return temp;
		}
	}
	return temp;
}

void show(vector<int> v){
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,sum;
    cin>>n>>sum;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
    	cin>>v[i];
	}
	vector<int> ssa;
	ssa=sum_subarray(v,sum);
	if(ssa.empty())
		cout<<"No subarray found\n";
	else
		show(ssa);
    return 0;
}
 
