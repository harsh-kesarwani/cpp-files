#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 

#define endl "\n"
#define PI 3.1415926535897932384626
#define mod 1000000007
#define INF 0x3f3f3f3f
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fastio;
    int n;
    cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	vector<bool> visited(n,false);
	for(int i=0;i<n;i++) {
		if(visited[i]) continue;
		int count=0;
		for(int j=i;j<n;j++) {
			if(v[j]==v[i]) {
				count++;
				visited[j]=true;
			}
		}
		cout<<v[i]<<" "<<count<<endl;
	}
    return 0;
}
