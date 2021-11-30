#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int d,m,n;
    cin>>d>>m>>n;
    int a[n+2];
    a[0]=0;
    for(int i=1;i<n+1;i++) cin>>a[i];
    a[n+1]=d;
    int i=0,ref=0,cnt=0;
    while(i<=n)
    {
    	ref=i;
    	while(i<=n&&a[i+1]-a[ref]<=m) i++;
    	if(i==ref) {
		cout<<"-1\n"; return 0;}
		if(i<=n) cnt++;
	}
	cout<<cnt<<"\n";
    return 0;
}
 
