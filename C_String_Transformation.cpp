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
	string s;
    cin>>s;
    char ch = 'a',ch1 = 'z';
    ch1++;
    for(auto &x:s) {
        if(x<=ch) {
            x=ch++;
        }
        if(ch==ch1) break;
    }
    if(ch==ch1) cout<<s<<endl;
    else cout<<-1<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	// cin>>T;
	T=1;
	while(T--) {
		solve();
	}
	return 0;
}