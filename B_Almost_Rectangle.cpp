#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<string> v(n);
    for(auto &x:v)
        cin>>x;
    int a,b,c,d,cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(v[i][j]=='*') {
                if(cnt==0) {
                    cnt++;
                    a=i;b=j;
                }
                else {
                    c=i,d=j;
                }
            }
        }
    }
    if(c==a) c=(a+1)%n;
    if(d==b) d=(b+1)%n;
    v[a][b]=v[a][d]=v[c][b]=v[c][d]='*';
    for(auto x:v) {
        cout<<x<<endl;
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	while(T--) {
		solve();
	}
	return 0;
}