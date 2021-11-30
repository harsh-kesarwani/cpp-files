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
	// freopen("/home/harsh/Downloads/runway_validation_input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/runway_validation_output.txt", "w", stdout);
	// #endif
}



vector<int> intersect(vector<int> &a, vector<int> &b) {
    vector<int> v(a.size() + b.size());
    vector<int>::iterator it, st;
  
    it = set_intersection(a.begin(),
                          a.end(),
                          b.begin(),
                          b.end(),
                          v.begin());
    vector<int> ans;
    for (st = v.begin(); st != it; ++st)
        ans.pb(*st);
    return ans;
}

int solve() {
	int n,m;
    cin>>n>>m;
    vector<int> s(m),p(m),common;
    for(auto &x:s) cin>>x;
    sort(all(s));
    common = s;
    int total = 0;
    for(int i=0;i<n;i++) {
        for(auto &x:p) cin>>x;
        sort(all(p));
        vector<int> v = intersect(s,p);
        total += m - v.size();
        common = intersect(common,p);
    }
    return max(0,total - m);
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