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
	string s,a,b;
    cin>>s;
    for(int i=0;i<s.size();i++) {
        if(i%2) a+=s[i];
        else b+=s[i];
    }
    if(a.empty()) a+='0';
    if(b.empty()) b+='0';
    ll aa = stoll(a);
    ll bb = stoll(b);
    ll ans = (aa+1)*(bb+1)-2;
    cout<<ans<<endl;
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