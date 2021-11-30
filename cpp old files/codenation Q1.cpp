#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define mod 1000000007

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int solve(vector<vi> &A, vector<vi> &B) {
	int n = A.size(), m = A[0].size();
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(i) A[i][j] += A[i-1][j] %= mod;
			if(j) B[i][j] += B[i][j-1] %= mod; 
		}
	}
	vector<vi> dp(n+1,vi(m+1));
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=m;j++) {
			if(i && j) dp[i][j] = max(dp[i-1][j]+B[i-1][j-1],dp[i][j-1]+A[i-1][j-1]) % mod;
			else dp[i][j]=0;
		}
	}
	return dp[n][m];
}

int main() {
	io();
	int T;
	cin>>T;
	while(T--) {
		int n,m;
		cin>>n>>m;
		vector<vi> A(n,vi(m)), B(n,vi(m));
		for(auto &x:A)
			for(auto &y:x)
				cin>>y;
		for(auto &x:B)
			for(auto &y:x)
				cin>>y;
		cout<<solve(A,B)<<endl;
	}
	cerr<<"Time: "<<1000*((double)clock())/CLOCKS_PER_SEC<<"ms\n";
	return 0;
}#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define mod 1000000007

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int solve(vector<vi> &A, vector<vi> &B) {
	int n = A.size(), m = A[0].size();
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(i) A[i][j] += A[i-1][j] %= mod;
			if(j) B[i][j] += B[i][j-1] %= mod; 
		}
	}
	vector<vi> dp(n+1,vi(m+1));
	for(int i=0;i<=n;i++) {
		for(int j=0;j<=m;j++) {
			if(i && j) dp[i][j] = max(dp[i-1][j]+B[i-1][j-1],dp[i][j-1]+A[i-1][j-1]) % mod;
			else dp[i][j]=0;
		}
	}
	return dp[n][m];
}

int main() {
	io();
	int T;
	cin>>T;
	while(T--) {
		int n,m;
		cin>>n>>m;
		vector<vi> A(n,vi(m)), B(n,vi(m));
		for(auto &x:A)
			for(auto &y:x)
				cin>>y;
		for(auto &x:B)
			for(auto &y:x)
				cin>>y;
		cout<<solve(A,B)<<endl;
	}
	cerr<<"Time: "<<1000*((double)clock())/CLOCKS_PER_SEC<<"ms\n";
	return 0;
}