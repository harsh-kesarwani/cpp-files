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

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("/home/harsh/Downloads/weak_typing_chapter_2_input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/weak_typing_chapter_2_output.txt", "w", stdout);
	// #endif
}

int solve() {
    ll n;
	string s;
    cin>>n>>s;
    int i=0;
    while(i<n && s[i]=='F') i++;
    if(i==n) return 0;
    char cur = s[i];
    ll ans=0, lj=i;
    for(ll j=i;j<n;j++) {
        if(s[j]=='F') continue;
        if(s[j]!=cur) {
            (ans += (lj+1)*(n-j)) %= mod;
            cur = s[j];
        }
        lj=j;
    }
    return ans;
}

int main() {
    io();
	int T;
	cin>>T;
    int cs = 0;
	while(T--) {
		cout<<"Case #"<<++cs<<": "<<solve()<<endl;
	}
	return 0;
}