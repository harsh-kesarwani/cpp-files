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
	
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    vector<int> v;
    int num=1;
    while(v.size()<1000) {
        v.pb(num++);
        while(num%3==0 || num%10==3) num++;
    }
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		int k;
        cin>>k;
        cout<<v[k-1]<<endl;
	}
	return 0;
}