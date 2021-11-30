#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define endl '\n'
#define mod 1000000007
#define pb push_back


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    	queue<pair<int,int> > q;
    	q.push({1,3});
    	q.push({2,4});
    	pair<int,int> p;
		p=q.front();
		cout<<p.first<<" "<<p.second;
    	cout<<endl;
    return 0;
}
