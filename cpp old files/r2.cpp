#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<0<<' '<<1<<' ';
    int p=0,c=1,tp=0;
    int sum=1;
	for(int i=0;i<n-1;i++)
	{
		tp=p;
		p=c;
		c=(c+tp)%10;
		sum=(sum+(c*c)%10)%10;
		cout<<(c*c)%10<<' ';
	}
	cout<<endl<<sum;
    return 0;
}
 
