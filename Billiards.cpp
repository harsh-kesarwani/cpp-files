#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000009

const int N = 1e6;
vector<int> dp(N+1,1);
void precalc() {
    dp[1]=0;
    for(int i=3;i<=N;i++) {
        dp[i] = (dp[i-2] + dp[i-3]) % mod;
    }
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    precalc();
	int T;
	cin>>T;
	while(T--) {
		int n;
        cin>>n;
        cout<<dp[n]<<endl;
	}
	return 0;
}