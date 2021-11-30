#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl '\n'
#define mod 1000000007

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n,m,x;
    cin>>n>>m>>x;
    vector<int> a1(n), a2(m);
    for(int i=0;i<n;i++) {
        cin>>a1[i];
    }
    for(int i=0;i<m;i++) {
        cin>>a2[i];
    }
    int l=0, r=m-1, diff=INT_MAX;
    int res_l,res_r;
    while(l<m&&r>=0) {
        if(abs(a1[l]+a2[r]-x)<diff) {
            res_l=l;
            res_r=r;
            diff=abs(a1[l]+a2[r]-x);
        }
        if(a1[l]+a2[r]>x) r--;
        else if(a1[l]+a2[r]<x) l++;
        else break;
    }
    cout<<a1[res_l]<<" "<<a2[res_r];
    return 0;
}
