#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

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
	for(int i=0;i<n-1;i++) {
		 for(int j=i+1;j<n;j++) {
		 	if(v[i]<v[j]) {
		 		swap(v[i],v[j]);
			 }
		 }
	}
	string s("");
	for(int i=0;i<n;i++) {
		string s1=to_string(v[i]);
		s.append(s1);
	}
	cout<<s<<endl;
    return 0;
}
 
