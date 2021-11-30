#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define endl '\n'
#define mod 1000000007
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	while(T--) {
    	int n;
    	cin>>n;
    	vector<int> v(n);
    	for(int &x:v) cin>>x;
    	sort(v.begin(),v.end());
    	int cnt=0, i=0, j=0, size=0;
    	while(j<n) {
	        if(v[j]==size) {
	            cnt++;
	            i+=size;
	            size=v[i];
	        }
	        else
	            size=v[j];
	        j=i+size-1;
    	}
        cout<<cnt<<endl;
	}
    return 0;
}
