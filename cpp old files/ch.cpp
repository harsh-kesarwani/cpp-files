#include<iostream>
using namespace std;
int main()
{
	int a,j;
	cin>>a;
	int b[a];
	for(j=0;j<a;j++)
	{
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]<=2048) sum+=a[i];
	}
	if(sum>=2048) b[j]=1;
	else b[j]=0;
	}
	for(j=0;j<a-1;j++)
	{if (b[j]==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;}
	if (b[a-1]==1) cout<<"YES";
	else cout<<"NO";
	return 0;
}
