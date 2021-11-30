#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPalindrome(string s)
{
	int len=s.size();
	bool ans=true;
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-1-i])
		{
			ans=false;
			break;
		}
	}
	return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
	string s;
	cin>>s;
	int len=s.length();
	string ans;
	int lmax=0;
	for(int i=0;i<len;i++)
	{
		for(int l=1;l<=len-i;l++)
		{
			if(isPalindrome(s.substr(i,l)))
			{
				if(l>lmax)
				{
					lmax=l;
					ans=s.substr(i,l);
				}
			}
		}
	}
	cout<<ans<<endl<<endl;
	}
    return 0;
}
 
