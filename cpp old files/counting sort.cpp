#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    m++;
    //array to input n numbers
    vector<int> v(n);
    for(int i=0;i<n;i++) {
    	cin>>v[i];
	}
	//array to count the no of occurences
	vector<int> count(m);
	for(int i=0;i<n;i++) {
		count[v[i]]++;
	}
	//array having position of first elements
	vector<int> pos(m);
	pos[0]=0;
	for(int i=1;i<m;i++) {
		pos[i]=pos[i-1]+count[i-1];
	}
	//resultant sorted array
	vector<int> va(n);
	for(int i=0;i<n;i++) {
		va[pos[v[i]]]=v[i];
		pos[v[i]]++;
	}
	//print the sorted array elements
	for(int i=0;i<n;i++) {
		cout<<va[i]<<" ";
	}
    return 0;
}
 
