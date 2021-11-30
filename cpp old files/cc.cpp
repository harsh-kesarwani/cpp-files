#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,g=1;
		cin>>n;				//n>=7
		int p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		if(p[1]<p[0]) g++;
		if(p[2]<p[0]&&p[2]<p[1]) g++;
		if(p[3]<p[0]&&p[3]<p[1]&&p[3]<p[2]) g++;
		if(p[4]<p[0]&&p[4]<p[1]&&p[4]<p[2]&&p[4]<p[3]) g++;
		for(int j=5;j<n;j++)
		{
			int d=1;
			for(int k=1;k<=5;k++)
			{
				if(p[j]>p[j-k])
				{
					d=0;
					break;
				}
			}
			if(d==1) g++;
		}
		cout<<g<<endl;
	}
	return 0;
}
