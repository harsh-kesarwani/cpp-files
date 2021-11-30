#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    sort(all(v));
    ll range=0;
    for(auto x:v) {
        if(x<=range+1) range+=x;
        else break;
    }
    cout<<range+1;
	return 0;
}