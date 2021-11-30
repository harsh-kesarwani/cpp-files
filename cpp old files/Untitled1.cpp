#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) x.begin(),x.end()
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define PI 3.1415926535897932384626
#define mod 1000000007
#define modd 998244353

void io() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

// vector<int> get(const string &s) {
// 	vector<int> res(s.size()+1);
// 	for(int i=0;i<s.size();i++)
// 		res[i+1]=s[i]-'a';
// 	return res;
// }

vector<int> get(const string &s) {
	vector<int> res(s.size() + 1);
	for (int i = 0; i < int(s.size()); ++i) {
		res[i + 1] = s[i] - 'a';
	}
	return res;
}

int main() {
	io();
	
	int k;
	string s,t;
	cin>>k>>s>>t;
	vector<int> a=get(s), b=get(t);
	for(auto x:a) cout<<setw(3)<<x;
	cout<<endl;
	for (int i = 1; i <= k; ++i) {
		cout << char('a' + a[i]);
	}
	cout << endl;
	for(auto x:b) cout<<setw(3)<<x;
	cout<<endl;
	for (int i = 1; i <= k; ++i) {
		cout << char('a' + b[i]);
	}
	cout << endl;
	for (int i = k; i >= 0; --i) {
		a[i] += b[i];
		if (i) {
			a[i - 1] += a[i] / 26;
			a[i] %= 26;
		}
	}
	for(auto x:a) cout<<setw(3)<<x;
	cout<<endl;
	for (int i = 1; i <= k; ++i) {
		cout << char('a' + a[i]);
	}
	cout << endl;
	for (int i = 0; i <= k; ++i) {
		int rem = a[i] % 2;
		a[i] /= 2;
		if (i + 1 <= k) {
			a[i + 1] += rem * 26;
		} else {
			assert(rem == 0);
		}
	}
	for(auto x:a) cout<<setw(3)<<x;
	cout<<endl;
	for (int i = 1; i <= k; ++i) {
		cout << char('a' + a[i]);
	}
	cout << endl;
	// for(auto x:b) cout<<setw(3)<<x;
	// cout<<endl;
	// int carry=0;
	// for(int i=k;i>0;i--) {
	// 	a[i]+=b[i]+carry;
	// 	carry=a[i]/26;
	// 	a[i]%=26;
	// }
	// a[0]=carry;
	return 0;
}
