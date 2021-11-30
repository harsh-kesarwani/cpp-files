#include<iostream>
#include<vector>

using namespace std;
int MaxPairwiseProduct(const std::vector<int>& v)
{
	int n=v.size(),max_1=0,max_2=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>=max_1)
		{
			max_2=max_1;
			max_1=v[i];
		}
	}
	return max_1*max_2;
}
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cout<<MaxPairwiseProduct(v);
	return 0;
}
