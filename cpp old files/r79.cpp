#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    int n=5;
    //cin>>n;
    array<int,5> a;
    for(int i=0;i<n;i++) {
    	cin>>a[i];
	}
	for(int i=0;i<n;i++) {
		cout<<a[i]<<" ";
	}
    return 0;
}
