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
	int n,j;
    string s;
    cin>>n>>j>>s;
    vector<int> v(n,0);
    for(int i=n-2;i>=0;i--) {
        v[i]=v[i+1];
        if(s[i+1]=='#') v[i]++;
    }
    if(v[j-1]<=j-1) cout<<"JAY"<<endl;
    else cout<<"JEFF"<<endl;
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