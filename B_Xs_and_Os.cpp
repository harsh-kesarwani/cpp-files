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
#define INF 10000000

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("/home/harsh/Downloads/xs_and_os_input.txt", "r", stdin);
	freopen("/home/harsh/Downloads/xs_and_os_output.txt", "w", stdout);
	#endif
}

void solve() {
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    set<pair<int,int>> st;
    int mn=1000,cnt=0;
    for(int i=0;i<n;i++) {
        int sum=0;
        bool O=false;
        for(int j=0;j<n;j++) {
            if(v[i][j]=='O') {
                O=true;
                break;
            }
            if(v[i][j]=='.') sum++;
        }
        if(O) continue;
        if(sum==1) {
            for(int j=0;j<n;j++) {
                if(v[i][j]=='.')
                    st.insert({i,j});
            }
        }
        if(sum<mn) {
            mn=sum;
            cnt=1;
        }
        else if(sum==mn) cnt++;
    }
    for(int j=0;j<n;j++) {
        int sum=0;
        bool O=false;
        for(int i=0;i<n;i++) {
            if(v[i][j]=='O') {
                O=true;
                break;
            }
            if(v[i][j]=='.') sum++;
        }
        if(O) continue;
        if(sum==1) {
            for(int i=0;i<n;i++) {
                if(v[i][j]=='.')
                    st.insert({i,j});
            }
        }
        if(sum<mn) {
            mn=sum;
            cnt=1;
        }
        else if(sum==mn) cnt++;
    }
    if(mn==1000) cout<<"Impossible"<<endl;
    else if(mn==1) cout<<1<<" "<<st.size()<<endl;
    else cout<<mn<<" "<<cnt<<endl;
}

int main() {
	io();
	int T;
	cin>>T;
    int cs = 1;
	while(T--) {
		cout<<"Case #"<<cs++<<": ";
        solve();
	}
	return 0;
}