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
	int n,m,k;
    cin>>n>>m>>k;
    vector<deque<int>> v;
    int hrs1=0,ones1=0;
    for(int w=0;w<n;w++) {
        deque<int> tem;
        string s;
        cin>>s;
        int sz = s.size();
        int i=0;
        while(i<sz && s[i]=='0') i++;
        if(i==sz) continue;
        int cnt=0;
        for(int j=i+1;j<sz;j++) {
            if(s[j]=='1') {
                tem.pb(cnt+1);
                hrs1+=cnt+1;
                ones1++;
                cnt=0;
            }
            else cnt++;
        }
        v.pb(tem);
    }
    int hrs = hrs1 + v.size();
    int ones =ones1 + v.size();

    // for(auto x:v) {
    //     for(auto y:x) {
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<hrs<<" "<<ones<<endl;
    
    if(k>=ones) {
        cout<<0<<endl;
        return;
    }
    if(k>=ones1) {
        int extra = k-ones1;
        int left = v.size() - extra;
        cout<<left<<endl;
        return;
    }
    int remove = 0;
    for(int i=0;i<k;i++) {
        int mx=0,ind=0,pos=0;
        for(int j=0;j<v.size();j++) {
            if(v[j].empty()) continue;
            if(v[j].front()>mx) {
                mx=v[j].front();
                ind=j;
                pos=0;
            }
            if(v[j].back()>mx) {
                mx=v[j].back();
                ind=j;
                pos=1;
            }
        }
        if(pos==0) {
            v[ind].pop_front();
        }
        else {
            v[ind].pop_back();
        }
        remove+=mx;
    }
    cout<<hrs-remove<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	// cin>>T;
	T=1;
	while(T--) {
		solve();
	}
	return 0;
}