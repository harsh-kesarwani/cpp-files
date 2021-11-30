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

bool isvalid(string s, string seq, string t) {
    string new_t=s;
    for(auto x:seq) {
        s.erase(remove(all(s), x), s.end());
        new_t+=s;
    }
    return new_t==t;
}

void solve() {
    string t;
    cin>>t;
    string seq;
    map<char,int> cnt;
    for(int i=t.size()-1;i>=0;i--) {
        cnt[t[i]]++;
        if(cnt[t[i]]==1) seq+=t[i]; 
    }
    reverse(all(seq));
    int plen = 0;
    for(int i=0;i<seq.size();i++) {
        if(cnt[seq[i]]%(i+1)) {
            cout<<-1<<endl;
            return;
        }
        plen += cnt[seq[i]]/(i+1);
    }
    string s = t.substr(0,plen);
    if(isvalid(s,seq,t)) 
        cout<<s<<" "<<seq<<endl;
    else
        cout<<-1<<endl;
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