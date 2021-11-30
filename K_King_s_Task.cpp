#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

void sw(vector<int> &v, int n, int c) {
    if(c==1) {
        for(int i=0;i<2*n;i+=2) {
            swap(v[i],v[i+1]);
        }
    }
    else {
        for(int i=0;i<n;i++) {
            swap(v[i],v[i+n]);
        }    
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
    cin>>n;
    vector<int> v(2*n);
    for(auto &x:v) cin>>x;
    vector<int> sv(v);
    sort(sv.begin(),sv.end());
    int lim = (n%2 ? 2*n : 4);
    int ans=0, c=1;
    while(ans<lim && v!=sv) {
        sw(v,n,c);
        c=3-c;
        ans++;
    }
    if(ans==lim) cout<<-1<<endl;
    else cout<<min(ans,(lim-ans)%lim)<<endl;
	return 0;
}