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
    
    pair<int,string> p{5,"Schools"};
    //p=make_pair(3,"Nice");
    //cout<<p.first<<" "<<p.second<<endl;
    map<int,string> m;
    m[302]="Hello";
    m[123]="Hii";
    m.insert(p);
    //cout<<m[123]<<endl;
    //cout<<m.at(302)<<endl;
    map<int,string>::iterator it=m.begin();
    while(it!=m.end()) {
    	cout<<it->second<<" ";
    	it++;
	}
	return 0;
}
