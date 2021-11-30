#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007

ll pro(int n) {
    ll ans = 1;
    while(n) {
        int d = n%10;
        if(d) ans*=d; 
        n/=10;
    }
    return ans;
	
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int ans = 0;
	for(int i=1;i<=n;i++) {
        ans+=pro(i);
    }
    cout<<ans;
	return 0;
}