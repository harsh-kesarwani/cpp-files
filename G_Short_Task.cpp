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

const int N = 1e7;
int spf[N+1];
ll d[N+1];
int ans[N+1];

void smallestprimefactor() {
	spf[1]=1;
	for(int i=2;i<=N;i++) {
		if(spf[i]) continue;
		spf[i]=i;
		for(ll j=i*1LL*i;j<=N;j+=i)
			if(spf[j]==0) spf[j]=i; 
	}
}

void sumofdivisors() {
    d[1]=1;
    for(int i=2;i<=N;i++) {
        ll term=1, sum=1;
        int k = spf[i], j = i;
        while(j%k==0) {
            j/=k;
            term*=k;
            sum+=term;
        }
        d[i] = sum*d[j];
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
    smallestprimefactor();
    sumofdivisors();
    fill(ans,ans+N,-1);
    for(int i=N;i>0;i--) {
        if(d[i]<=N) ans[d[i]]=i;
    }
    while(T--) {
		int c;
        cin>>c;
        cout<<ans[c]<<endl;
	}
	return 0;
}