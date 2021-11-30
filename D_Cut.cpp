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

int *st;

int findGcd(int ss, int se, int qs, int qe, int si)
{
    if (ss>qe || se < qs)
        return 0;
    if (qs<=ss && qe>=se)
        return st[si];
    int mid = ss+(se-ss)/2;
    return __gcd(findGcd(ss, mid, qs, qe, si*2+1),
               findGcd(mid+1, se, qs, qe, si*2+2));
}
  
int rangegcd(int ss, int se, int arr[],int n)
{
    if (ss<0 || se > n-1 || ss>se)
    {
        cout << "Invalid Arguments" << "\n";
        return -1;
    }
    return findGcd(0, n-1, ss, se, 0);
}

int constructST(int arr[], int ss, int se, int si)
{
    if (ss==se)
    {
        st[si] = arr[ss];
        return st[si];
    }
    int mid = ss+(se-ss)/2;
    st[si] = __gcd(constructST(arr, ss, mid, si*2+1),
                 constructST(arr, mid+1, se, si*2+2));
    return st[si];
}

int *constructSegmentTree(int arr[], int n)
{
   int height = (int)(ceil(log2(n)));
   int size = 2*(int)pow(2, height)-1;
   st = new int[size];
   constructST(arr, 0, n-1, 0);
   return st;
}

void solve() {
	int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(auto &x:v) cin>>x;
    int a[n];
    for(int i=0;i<n;i++) a[i]=v[i];
    constructSegmentTree(a,n);
    // for(int i=0;i<n;i++) {
    //     for(int j=i;j<n;j++) {
    //         for(int k=i;k<=j;k++) {
    //             cout<<a[k]<<" ";    
    //         }
    //         cout<<rangegcd(i,j,a,n)<<endl;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<q;i++) {
        int l,r;
        cin>>l>>r;
        l--;r--;
        int ans=1,st=l,g=v[l];
        for(int j=l+1;j<=r;j++) {
            if(rangegcd(st,j,a,n)==1) continue;
            ans++;
            st=j;
            g=v[j];
        }
        cout<<ans<<endl;
    }
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