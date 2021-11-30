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
    vector<int> v(n+m);
    vector<bool> b(n+m);
    int i=0,j=0,k=0;
    while(i<n&&j<m) {
        if(a1[i]<a2[j]) {
            v[k]=a1[i];
            b[k]=true;
            i++;
        }
        else {
            v[k]=a2[j];
            b[k]=false;
            j++;
        }
        k++;
    }
    while(i<n) {
        v[k]=a1[i];
        b[k]=true;
        i++;
        k++;
    }
    while(j<m) {
        v[k]=a2[j];
        b[k]=false;
        j++;
        k++;
    }
    int l=0, r=m+n-1, diff=INT_MAX;
    int res_l,res_r;
    while(l<r) {
        if(abs(v[l]+v[r]-x)<diff&&b[l]!=b[r]) {
            res_l=l;
            res_r=r;
            diff=abs(v[l]+v[r]-x);
        }
        if(v[l]+v[r]>x) r--;
        else if(v[l]+v[r]<x) l++;
        else break;
    }
    cout<<v[res_l]<<" "<<v[res_r];
    return 0;
}
