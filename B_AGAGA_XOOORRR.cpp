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

bool solve() {
    int n;
    cin>>n;
    vector<int> v(n),left(n),right(n);
    for(auto &x:v) cin>>x;
    left[0]=v[0];
    for(int i=1;i<n;i++) left[i]=v[i]^left[i-1];
    if(left[n-1]==0) return true;
    int i=n-1;
    while(left[i]) i--;
    for(int j=i-1;j>=0;j--) {
        if(left[j]==left[n-1]) return true;
    }
    return false;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		cout<<(solve() ? "YES" : "NO")<<endl;
	}
	return 0;
}