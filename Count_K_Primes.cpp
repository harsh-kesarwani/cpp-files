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

const int N = 1e5, K = 5;
int spf[N+1];
int kp[N+1];
vector<vector<int>> v(N+1,vector<int>(K+1,0));

void smallestprimefactor() {
	spf[1]=1;
	for(int i=2;i<=N;i++) {
		if(spf[i]) continue;
		spf[i]=i;
		for(ll j=i*1LL*i;j<=N;j+=i)
			if(spf[j]==0) spf[j]=i; 
	}
}

void kprime() {
	for(int i=2;i<=N;i++) {
		int z = i/spf[i];
		kp[i]=kp[z];
		if(spf[z]!=spf[i]) kp[i]++;
	}
	for(int i=1;i<=N;i++) {
		for(int j=1;j<=5;j++) {
			v[i][j]=v[i-1][j];
			if(kp[i]==j) v[i][j]++;
		}
	}
}

void solve() {
	int a,b,k;
	cin>>a>>b>>k;
	cout<<v[b][k]-v[a-1][k]<<endl;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	smallestprimefactor();
	kprime();
	while(T--) {
		solve();
	}
	return 0;
}