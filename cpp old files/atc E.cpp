#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define endl '\n'
#define mod 1000000007
#define modd 998244353
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

void io() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

const int MAX = 2*1e5;

struct infant {
	int num;
	int rat;
};

bool comp(const infant &a,const infant &b) {
	return a.rat<b.rat;
}

int main() {
	io();
	int n,q;
	cin>>n>>q;
	vector<set<infant,comp>> v(MAX);
	return 0;
}

