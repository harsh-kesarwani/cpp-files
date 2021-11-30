#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j;
        cin>>n;
        for(i=n;;i+=n)
        {
            for(j=1;j<=n;j++)
            {
                if(i%j==0) continue;
                else break;
            }
            if(j==n+1) break;
        }
        cout<<i<<endl;
    }
    return 0;
}

