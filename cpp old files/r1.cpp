#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int p=0,c=1,tp=0;
    cout<<p<<' '<<c<<' ';
    for(int i=0;i<n-1;i++)
    {
        tp=p;
        p=c;
        c=(c+tp)%10;
        cout<<c<<' ';
    }
	return 0;
}
 

