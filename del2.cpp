#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007


typedef long long ll;


int main() {
    vector<int> v(3);
    for(int i=0;i<3;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int a = v[2], b = v[1], c = v[0];
    cout<<min((a+b+c)/3,c + min(b-c,(a-c)/2));
	return 0;
}