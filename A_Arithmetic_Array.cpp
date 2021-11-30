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

int solve() {
	int n;
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        sum += x;
    }
    if(sum >= n) return sum - n;
    return 1;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	while(T--) {
		cout<<solve()<<endl;
	}
	return 0;
}