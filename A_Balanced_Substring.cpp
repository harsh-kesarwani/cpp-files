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
    int n;
	string s;
    cin>>n>>s;
    for(int i=0;i<n-1;i++) {
        if(s[i]!=s[i+1]) {
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"-1 -1"<<endl;
    return;
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