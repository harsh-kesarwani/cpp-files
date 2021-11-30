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

string super(string s, string t, string lcs) {
    int i=0,j=0;
    string ans;
    for(int k=0;k<lcs.size();i++,j++,k++) {
        while(s[i]!=lcs[k]) ans+=s[i++];
        while(t[j]!=lcs[k]) ans+=t[j++];
        ans+=lcs[k];
    }
    ans+=s.substr(i);
    ans+=t.substr(j);
    return ans;
}

string lcs(string s, string t) {
    int n=s.size(), m=t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<m;j++) {
            if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    string ans;
    int i=n,j=m;
    while(ans.size()<dp[n][m]) {
        if(s[i-1]==t[j-1]) {
            ans+=s[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]) i--;
        else j--;
    }
    return ans;
}

string solve() {
	int n;
    cin>>n;
    string s,t,u;
    cin>>s>>t>>u;
    string l=lcs(s,t);
    if(l.size()>=n) return super(s,t,l);
    l=lcs(s,u);
    if(l.size()>=n) return super(s,u,l);
    l=lcs(t,u);
    return super(t,u,l);
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		cout<<solve()<<endl;
	}
	return 0;
}