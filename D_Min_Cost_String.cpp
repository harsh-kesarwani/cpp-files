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
    int n,k;
    cin>>n>>k;
    string s;
    int c=0;
    while(s.size()<n) {
        s+='a'+c;
        for(int i=c+1;i<k;i++) {
            s+='a'+c;
            s+='a'+i;
        }
        c++;
        c%=k;
    }
    cout<<s.substr(0,n)<<endl;
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