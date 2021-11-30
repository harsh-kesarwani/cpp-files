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
#define eps 1e-9

void calc(double c, double m, double p, double v, double &ans, double mf, int n, string s) {
    if(c>0) {
        double c1=c,m1=m,p1=p;
        double red = (c>v ? v : c);
        c1-=red;
        if(m1<eps) p1+=red;
        else {
            m1+=red/2.0;
            p1+=red/2.0;
        }
        calc(c1,m1,p1,v,ans,mf*c,n+1,s+"C");
    }
    if(m>0) {
        double c1=c,m1=m,p1=p;
        double red = (m>v ? v : m);
        m1-=red;
        if(c1<eps) p1+=red;
        else {
            c1+=red/2.0;
            p1+=red/2.0;
        }
        calc(c1,m1,p1,v,ans,mf*m,n+1,s+"M");
    }
    // reverse(all(s));
    // cout<<s<<" "<<mf*p<<endl;
    ans += n*mf*p;
}

void solve() {
    double c,m,p,v;
    cin>>c>>m>>p>>v;
	double ans = 0;
    calc(c,m,p,v,ans,1.0,1,"P");
    cout<<ans<<endl;
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    cout<<fixed<<setprecision(12);
	int T;
	cin>>T;
	// T=1;
	while(T--) {
		solve();
	}
	return 0;
}