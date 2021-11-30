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
    int input;
    vector<int> v;
    for(int i=0;i<n;i++) {
    	cin>>input;
    	v.push_back(input);
	}
	int l,r;
	cin>>l>>r;
	for(int i=0;i<v.size();i++) {
		cout<<" "<<i<<" ";
	}
	cout<<endl;
	sort(v.begin()+l,v.begin()+r+1);
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
    return 0;
}
