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

bool issq(int x) {
    int y = sqrt(x);
    return x == y*y;
}

bool solve() {
	int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    for(auto x:v) {
        if(!issq(x)) return true;
    }
    return false;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		cout<<(solve() ? "YES" : "NO")<<endl;
	}
	return 0;
}