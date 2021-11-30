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

void solve() {
	int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int i=0;
    while(k>=a[i] && i<n-1) {
        k-=a[i];
        a[n-1]+=a[i];
        a[i]=0;
        i++;
    }
    if(i<n-1) {
        a[i]-=k;
        a[n-1]+=k;
    }
    for(auto x:a) cout<<x<<" ";
    cout<<endl; 
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		solve();
	}
	return 0;
}