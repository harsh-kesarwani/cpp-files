#include<iostream>
using namespace std;
bool isPalindrome(int);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d=0,i,N,k;
		cin>>N;//condition: 101101<N<1000000
		if(N<101113) k=101112;
		else if(N%11==0) k=N-11;//k is the largest multiple of 11 below N
		else k=N-N%11;
		for(n=k;n>=101101;n-=11)//since palindrome number is divisible by 11
		{
			if(isPalindrome(n))
			{
				for(i=999;i>=100;i--)
				{
					if(n%i==0)
					{
						if(n/i<1000&&n/i>=100)
						{d++;
						break;}
					}
				}
			}
			if(d!=0) break;
		}
		cout<<n<<endl;
	}
	return 0;
}
bool isPalindrome(int n)
{
	int rev=0,k=n;
	while(n>0)
	{
		rev=rev*10+n%10;
		n/=10;
	}
	if(rev==k) return true;
	else return false;
}
