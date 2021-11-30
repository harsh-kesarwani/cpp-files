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
const int inf = 1e9;

ll solve() {
    int n;
	string s;
    cin>>n>>s;
    vector<ll> left(n,inf),right(n,inf);
    int j=0;
    while(s[j]!='1') j++;
    int cnt=0;
    for(int i=j;i<n;i++) {
        if(s[i]=='1') cnt=0;
        else cnt++;
        left[i]=cnt;
    }
    j=n-1,cnt=0;
    while(s[j]!='1') j--;
    for(int i=j;i>=0;i--) {
        if(s[i]=='1') cnt=0;
        else cnt++;
        right[i]=cnt;
    }
    ll ans =0;
    for(int i=0;i<n;i++) {
        ans += min(left[i],right[i]);
    }
    return ans;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin>>T;
	int cs=0;
	while(T--) {
		cout<<"Case #"<<++cs<<": "<<solve()<<endl;;
	}
	return 0;
}