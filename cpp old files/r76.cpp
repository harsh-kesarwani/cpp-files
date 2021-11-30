#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        v[i]-=(i+1);
    }
    int a,b,i,j;
    for(i=0;i<n;i++) {
        if(v[i]) {a=i;break;}
    }
    if(i==n) {
        cout<<"yes\n1 1\n";
        return 0;
    }
    for(j=n-1;j>=0;j--) {
        if(v[j]) {b=j;break;}
    }
    int ok=1;
    while(i<=j) {
        if(v[i]!=j-i||v[j]!=i-j) {
            ok=0;
            break;
        }
        i++;
        j--;
    }
    if(ok) cout<<"yes\n"<<a+1<<" "<<b+1<<endl;
    else cout<<"no\n";
    return 0;
}
/*
3
3 2 1
4
2 1 3 4
4
3 1 2 4
2
1 2
*/
