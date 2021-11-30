#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main() {
	string s;
	cin>>s;
	int n=s.length(),ans=0;
	for(int i=0;i<s.length();i++)
		if(s[i]=='1') ans+=(1<<(n-i-1));
	cout<<ans<<endl;
    return 0;
}
 
