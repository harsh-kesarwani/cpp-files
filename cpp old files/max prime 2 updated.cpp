#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,factor;
		cin>>n;
		for(factor=2;factor*factor<=n;factor++)
		{
			while(n%factor==0 && n!=factor)
			n/=factor;
		}
		cout<<n<<endl;
	}
	return 0;
}
