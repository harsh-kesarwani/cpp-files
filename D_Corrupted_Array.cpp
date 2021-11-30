#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    vector<int> v(n+2);
    ll sum=0;
    map<ll,int> cnt;
    for(auto &x:v) {
        cin>>x;
        cnt[x]++;
        sum+=x;
    }
    for(int i=0;i<n+2;i++) {
        ll tsum=sum-v[i];
        if(tsum%2) continue;
        if(v[i]==tsum/2) cnt[tsum/2]--;
        if(cnt[tsum/2]>0) {
            if(v[i]!=tsum/2) cnt[v[i]]--;
            cnt[tsum/2]--;
            for(auto x:cnt) {
                for(int i=0;i<x.second;i++) cout<<x.first<<" ";
            }
            cout<<endl;
            return;
        }
        if(v[i]==tsum/2) cnt[tsum/2]++;
    }
    cout<<-1<<endl;
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