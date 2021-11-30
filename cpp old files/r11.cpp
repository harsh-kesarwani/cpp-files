#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len/2;i++)
    {
    	swap(s[i],s[len-1-i]);
	}
	cout<<s<<endl;
    return 0;
}
 
