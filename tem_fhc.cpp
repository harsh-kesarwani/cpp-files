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

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("/home/harsh/Downloads/input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/output.txt", "w", stdout);
	// #endif
}

int solve() {

}

int main() {
	io();
	int T;
	cin>>T;
    int cs = 0;
	while(T--) {
		cout<<"Case #"<<++cs<<": ";
        cout<<solve();
        cout<<endl;
	}
	return 0;
}