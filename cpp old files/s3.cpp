#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define endl '\n'
#define mod 1000000007
#define pb push_back
#define PI acos(-1.0)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stack<char> s;
	s.push('4');
	s.push('*');
	s.push('(');
	s.push('*');
	s.push('+');
	s.push('-');
	vector<char> v;
	char x=')';
	if(x==')') {
        while(s.top()!='(') {
            v.push_back(s.top());
            s.pop();
        }
        s.pop();
    }
    for(char x:v) cout<<x;
    cout<<endl;
	while(!s.empty()) {
        cout<<s.top();
        s.pop();
    }
    return 0;
}
