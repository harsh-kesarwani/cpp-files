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
    if(k>(n-1)/2) {
        cout<<-1<<endl;
        return;
    }
    vector<int> v;
    for(int i=1;i<=n;i++) v.pb(i);
    int i=0,j=n-1;
    while(i<=j) {
        cout<<v[i++]<<" ";
        if(i<=j && k>0) {
            cout<<v[j--]<<" ";
            k--;
        }
    }
    cout<<endl;
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