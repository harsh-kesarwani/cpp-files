#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
	int a[26];
	for(int i=0;i<26;i++)
	{
	    a[i]=0;
	}
	for(int j=0;j<s.length();j++)
	{
	    a[s[j]-65]++;
	}
	int c=0,flag=0,m=-1;
	for(int i=0;i<26;i++)
	{
	    if(a[i]%2)
	    {
	        c++;
	        if(c>1) {flag=1;break;}
	        m=i;
	    }
	}
	if(flag) cout<<"NO SOLUTION";
	else
	{
	    for(int j=0;j<26;j++)
	    {
	        for(int k=0;k<a[j]/2;k++) cout<<(char)(j+65);
	    }
	    if(m>-1) cout<<(char)(m+65);
	    for(int j=25;j>=0;j--)
	    {
	        for(int k=0;k<a[j]/2;k++) cout<<(char)(j+65);
	    }
	}
	return 0;
}
