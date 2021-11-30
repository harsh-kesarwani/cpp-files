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
    int cnt = 0;
    vector<int> twos;
    for(int i=0;i<n;i++) {
        if(s[i]=='2') twos.pb(i);
    }
    int m = twos.size();
    if(m == 1 || m == 2) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    vector<vector<char>> v(n,vector<char>(n,'='));
    for(int i=0;i<n;i++) {
        v[i][i]='X';
    }
    for(int i=0;i<m;i++) {
        v[twos[i]][twos[(i+1)%m]]='+';
        v[twos[(i+1)%m]][twos[i]]='-';
    }
    for(auto x:v) {
        for(auto y:x) {
            cout<<y;
        }
        cout<<endl;
    }
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