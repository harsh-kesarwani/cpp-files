#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a=n/2;
    	if(a%2==1) {cout<<"NO\n"; break;}
    	int arr[n];
    	arr[0]=2;
    	for(int i=1;i<a;i++)
    	{
    		arr[i]=arr[i-1]+2;
		}
		arr[a]=1;
		for(int i=a+1;i<2*a;i++)
    	{
    		arr[i]=arr[i-1]+2;
		}
		arr[2*a-1]+=a;
		cout<<"YES\n";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
 
