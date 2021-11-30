#include <bits/stdc++.h>
using namespace std;

typedef long long		ll;
typedef vector<int>		vi;
typedef vector<ll> 		vll;
typedef pair<int,int>	pii;
typedef pair<ll,ll>		pll;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vll>		vvll;

#define endl 	'\n'
#define mod 	1000000007
#define PI 		3.1415926535897932384626
#define pb 		push_back
#define mp 		make_pair
#define all(x) 	x.begin(),x.end()

void io() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

bool comp(int x, int y) {
	return x>y;
}

void vectorDemo() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(auto &x:v) cin>>x;
	// sort(all(v),comp);
	// for(auto x:v) cout<<x<<" ";
	// cout<<endl;
	// cout<<binary_search(all(v),6)<<endl;
	// vector<int>::iterator low=lower_bound(all(v),6);
	// vector<int>::iterator upp=upper_bound(all(v),6);
	// cout<<upp-low<<endl;
	sort(all(v),comp);
	for(auto x:v) cout<<x<<" ";
	cout<<endl;
	cout<<binary_search(all(v),6,greater<int>())<<endl;
	auto low=lower_bound(all(v),6,greater<int>());
	auto upp=upper_bound(all(v),6,greater<int>());
	cout<<upp-low<<endl;
}

void setDemo() {
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(-1);
	s.insert(-10);
	s.insert(6);
	s.insert(2);
	s.insert(9);
	s.insert(7);
	for(int x:s)
		cout<<x<<" ";
	cout<<endl;
	auto it=s.find(2);
	if(it==s.end())
		cout<<"Not Present\n";
	else cout<<"Present\n";
	auto it2=lower_bound(all(s),10);
	if(it2==s.end())
		cout<<"End\n";
	else cout<<*it2<<endl;
}

void mapDemo() {
	map<int,int> m;
	m[2]=10;
	m[0]=3;
	m[5]=-1;
	m[10003]=5;
	m[-23]=300;

	map<char,int> cnt;
	string s="harsh kesarwani";
	for(char x:s) cnt[x]++;
	for(auto it=cnt.begin();it!=cnt.end();it++) {
		cout<<it->first<<" "<<it->second<<endl;
	}
}

void powerOfStl() {
	set<pair<int,int>> s;
}

int main() {
	io();
	
	powerOfStl();
	return 0;
}