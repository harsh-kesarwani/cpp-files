#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void solve() {
    int n,l,r,s;
    cin>>n>>l>>r>>s;
    int k=r-l+1;
    int lsum=k*(k+1)/2;
    int rsum=lsum+k*(n-k);
    if(s<lsum || s>rsum) {
        cout<<-1<<endl;
        return;
    }
    s-=lsum;
    int quo=s/k;
    int rem=s%k;
    vector<int> v;
    for(int i=1;i<=k+1;i++) {
        if(i!=k+1-rem)
            v.push_back(i+quo);
    }
    vector<int> w;
    for(int i=1;i<=quo;i++) w.push_back(i);
    w.push_back(quo+k+1-rem);
    for(int i=quo+k+2;i<=n;i++) w.push_back(i);
    cout<<"v - ";
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    cout<<"w - ";
    for(auto x:w) cout<<x<<" ";
    cout<<endl;
    for(int i=0;i<l-1;i++) cout<<w[i]<<" ";
    for(auto x:v) cout<<x<<" ";
    for(int i=l-1;i<n-k;i++) cout<<w[i]<<" ";
    cout<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	while(T--) {
		solve();
        cout<<endl;
	}
	return 0;
}