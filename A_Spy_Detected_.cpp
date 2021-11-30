#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    for(int i=1;i<n-1;i++) {
        if(v[i]!=v[i-1] && v[i]!=v[i+1]) {
            cout<<i+1<<endl;
            return;
        }
    }
    if(v[0]==v[1]) {
        cout<<n<<endl;
        return;
    }
    cout<<1<<endl;
    return;
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