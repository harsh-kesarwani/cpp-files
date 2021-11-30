#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d=1,i=1,limit;
        cin>>limit;
        if(limit==1) i=2;
        while(d<limit)
        {
        	i+=2;
            if(isPrime(i)) d++;
        }
        cout<<i<<endl;
    }
    return 0;
}
bool isPrime(int a)//a>1
{
	if(a<4) return true;
	if(a%2==0) return false;
	if(a%3==0) return false;
	int sq=sqrt(a);
    for(int j=5;j<=sq;j+=6)
    {
        if(a%j==0) return false;
        if(a%(j+2)==0) return false;
    }
    return true;
}
