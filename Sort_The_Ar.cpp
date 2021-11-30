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

const int N = 2e5;
int res[N+1];

void residue() {
    for(int i=1;i*i<=N;i++) {
        int sq = i*i;
        for(int j=sq;j<=N;j+=sq) {
            res[j]=sq;
        }
    }
}

bool solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    vector<vector<int>> pre(n+1), post(n+1);
    for(int i=0;i<n;i++) {
        int in=i+1;
        pre[in/res[in]].pb(v[i]);
    }
    for(auto &x:pre) {
        sort(all(x));
    }
    sort(all(v));
    for(int i=0;i<n;i++) {
        int in=i+1;
        post[in/res[in]].pb(v[i]);
    }
    for(int i=0;i<pre.size();i++) {
        if(pre[i]!=post[i])
            return false;
    }
    return true;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
    residue();
	while(T--) {
		cout<<(solve()?"YES":"NO")<<endl;
	}
	return 0;
}