#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007
#define PI acos(-1.0)

int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
		int n;
		cin>>n;
		vector<int> v(n);
		for(int &x:v) cin>>x;
	while(true) {
		int srch;
		cin>>srch;
		cout<<binary_search(v.begin(),v.end(),srch)<<endl;
	}
    return 0;
}
