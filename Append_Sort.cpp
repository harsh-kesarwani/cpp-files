#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 51651651651651

string inc(string s) {
    int n=s.length();
    for(int i=n-1;i>=0;i--) {
        if(s[i]=='9') s[i]='0';
        else {
            s[i]++;
            break;
        }
    }
    return s;
}

ll fn(vector<string> &v, ll i) {
    ll na = v[i-1].length(), nb = v[i].length();
    if(nb>na || (nb==na && v[i]>v[i-1])) return 0;
    // if(v[i-1]==v[i]) {
    //     v[i]+='0';
    //     return 1;
    // }
    string prea=v[i-1].substr(0,nb);
    string k(na-nb,'0');
    string l(na-nb,'9');
    string sufa=v[i-1].substr(nb);
    if(v[i]>prea) {
        v[i]+=k;
        return na-nb;
    }
    if(v[i]==prea) {
        if(na==nb || sufa==l) {
            v[i]+=k;
            v[i]+='0';
            return na-nb+1;
        }
        else {
            
            v[i]+=inc(sufa);
            return na-nb;
        }
    }
    v[i]+=k;
    v[i]+='0';
    return na-nb+1;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	ll T;
	cin>>T;
	ll cs=0;
	while(T--) {
		ll n;
		cin>>n;
		vector<string> v;
        for(int i=0;i<n;i++) {
            int x;cin>>x;
            v.pb(to_string(x));
        }
        ll ans=0;
        for(ll i=1;i<n;i++) {
            ans+=fn(v,i); 
        }
		cout<<"Case #"<<++cs<<": "<<ans<<endl;
	}
	return 0;
}