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
	
	string s;
	cin>>s;
	cout<<"min - "<<*min_element(s.begin(),s.end())<<endl;
	cout<<"max - "<<*max_element(s.begin(),s.end())<<endl;
    return 0;
}

/*
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
