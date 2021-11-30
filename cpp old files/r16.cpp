#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

string largest_number(vector<int> v) {
	string s="";
	while(v.size()>0) {
		int mx=-1,ix=-1;
		for(int i=0;i<v.size();i++) {
			if(v[i]>mx) {
				mx=v[i];
				ix=i;
			}
		}
		s+=(char)(mx+48);
		v.erase(i);
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> digits(n);
    for(int i=0;i<n;i++) {
    	cin>>v[i];
	}
	string s=largest_number(v);
	cout<<s<<endl;
    return 0;
}
 
