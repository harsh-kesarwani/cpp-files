#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

ll solve1() {
		int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++) {
            cin>>a[i]>>b[i];
        }
        ll ans=0, mn=LONG_MAX;
        for(int i=0;i<n;i++) {
            int ni=(i+1)%n;
            ll val=min(a[ni],b[i]);
            ans+=a[ni]-val;
            mn=min(mn,val);
        }
        ans+=mn;
	return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    	cout<<solve1();
    return 0;
}

