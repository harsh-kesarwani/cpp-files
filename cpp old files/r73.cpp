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
    
    vector<int> v(3);
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    vector<int>::iterator it=v.begin();
    v.insert(it+1,2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++) {
    	cout<<v[i]<<" ";
	}
    return 0;
}
