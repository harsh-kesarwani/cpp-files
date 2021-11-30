#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define endl '\n'
#define mod 1000000007
#define pb push_back
#define PI acos(-1.0)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--) {
    	string s;
    	cin>>s;
    	ll num=0;
    	for(auto x:s) {
    		num=num*2+(x=='1');
		}
		cout<<num<<endl;
	}
    return 0;
}
