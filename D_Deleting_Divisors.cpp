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

bool solve() {
	int n;
    cin>>n;
    if(n == 2 || n == 8) return false;
    return (n % 2 == 0);
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		cout<<(solve() ? "Alice" : "Bob")<<endl;
	}
	return 0;
}