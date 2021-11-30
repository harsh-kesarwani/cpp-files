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

vector<vector<int>> v = {{2,3},{11,13},{101,103},{1009,1013},{10007,10009},{100003,100019},{1000003,1000033},{10000019,10000169},{998244253,999999937}};

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<v[a-c][0]*(int)pow(10,c-1)<<" "<<v[b-c][1]*(int)pow(10,c-1)<<endl;
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