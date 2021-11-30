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
    int n;
    string s;
    cin>>n>>s;
	map<char,int> cnt;
    for(auto x:s) {
        cnt[x-'0']++;
    }
    for(auto x:{1,4,6,8,9}) {
        if(cnt[x]) {
            cout<<1<<endl<<x<<endl;
            return;
        }
    }
    for(auto x:{2,3,5,7}) {
        if(cnt[x]>1) {
            cout<<2<<endl<<x<<x<<endl;
            return;
        }
    }
    for(int i=0;i<s.size();i++) {
        if(s[i]=='2' || s[i]=='5' || s[i]=='7') {
            for(int j=i+1;j<s.size();j++) {
                if(s[j]=='2' || s[j]=='5' || s[j]=='7') {
                    if(s[i]==s[j]) continue;
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
    }
    cout<<s.size()<<endl<<s<<endl;
    return;
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