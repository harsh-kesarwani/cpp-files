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

ll solve() {
    ll d,n,k;
    cin>>d>>n>>k;
    vector<vector<ll>> start(d),end(d);
    for(ll i=0,h,s,e;i<n;i++) {
        cin>>h>>s>>e;
        start[s-1].pb(h);
        end[e-1].pb(h);
    }
    // for(int i=0;i<d;i++) {
    //     cout<<i<<endl;
    //     for(auto x:start[i]) cout<<x<<" ";
    //     cout<<endl;
    //     for(auto x:end[i]) cout<<x<<" ";
    //     cout<<endl;
    // }
    multiset<ll> topk, xtra;
    ll sum=0,ans=0;
    for(int i=0;i<d;i++) {
        // cout<<i+1<<endl;
        // cout<<"sum = "<<sum<<endl;
        for(auto x:start[i]) {
            auto it = topk.begin();
            if(topk.size()<k) {
                topk.insert(x);
                sum += x;
            }
            else if(x>*it) {
                xtra.insert(*it);
                sum -= *it;
                topk.erase(it);
                topk.insert(x);
                sum += x;
            }
            else {
                xtra.insert(x);
            }
        }
        ans = max(ans,sum);
        // for(auto x:topk) cout<<x<<" ";
        // cout<<endl;
        // for(auto x:xtra) cout<<x<<" ";
        // cout<<endl;
        // cout<<"sum = "<<sum<<endl;
        for(auto x:end[i]) {
            if(xtra.count(x)) {
                xtra.erase(xtra.lower_bound(x));
            }
            else {
                topk.erase(topk.lower_bound(x));
                sum -= x;
                if(!xtra.empty()) {
                    auto it = prev(xtra.end());
                    topk.insert(*it);
                    sum += *it;
                    xtra.erase(it);
                }
            }
        }
        // for(auto x:topk) cout<<x<<" ";
        // cout<<endl;
        // for(auto x:xtra) cout<<x<<" ";
        // cout<<endl;
        // cout<<"sum = "<<sum<<endl;
        // cout<<"---------"<<endl;
    }
    return ans;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	int cs=0;
	while(T--) {
		cout<<"Case #"<<++cs<<": "<<solve()<<endl;
	}
	return 0;
}