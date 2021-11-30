#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string str[26];
	for(int i=0;i<26;i++)
	{
	    str[i]=(char)(65+i);
	}
	int a[26];
	for(int i=0;i<26;i++)
	{
	    a[i]=0;
	}
	for(int j=0;j<s.length();j++)
	{
	    switch(s[j])
	    {
	        case 'A': a[0]++;break;
	        case 'B': a[1]++;break;
	        case 'C': a[2]++;break;
	        case 'D': a[3]++;break;
	        case 'E': a[4]++;break;
	        case 'F': a[5]++;break;
	        case 'G': a[6]++;break;
	        case 'H': a[7]++;break;
	        case 'I': a[8]++;break;
	        case 'J': a[9]++;break;
	        case 'K': a[10]++;break;
	        case 'L': a[11]++;break;
	        case 'M': a[12]++;break;
	        case 'N': a[13]++;break;
	        case 'O': a[14]++;break;
	        case 'P': a[15]++;break;
	        case 'Q': a[16]++;break;
	        case 'R': a[17]++;break;
	        case 'S': a[18]++;break;
	        case 'T': a[19]++;break;
	        case 'U': a[20]++;break;
	        case 'V': a[21]++;break;
	        case 'W': a[22]++;break;
	        case 'X': a[23]++;break;
	        case 'Y': a[24]++;break;
	        case 'Z': a[25]++;break;
	    }
	}
	int c=0,flag=0,m=-1;
	for(int i=0;i<26;i++)
	{
	    if(a[i]%2==1) 
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
	        for(int k=0;k<a[j]/2;k++) cout<<str[j];
	    }
	    if(m>-1) cout<<str[m];
	    for(int j=25;j>=0;j--)
	    {
	        for(int k=0;k<a[j]/2;k++) cout<<str[j];
	    }
	}
	return 0;
}
