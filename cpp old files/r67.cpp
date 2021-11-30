#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void convert_to_upper(string &s) {
	for(int i=0;i<s.length();i++) {
		s[i]&='_';
	}
}

void convert_to_lower(string &s) {
	for(int i=0;i<s.length();i++) {
		s[i]|=' ';
	}
}

int main() {
    fastio;
    
    string s;
    getline(cin,s);
	for(int i=0;i<s.length();i++) {
    	cout<<(int)s[i]<<" ";
	}
	cout<<endl;
    string t=s;
    convert_to_lower(s);
    cout<<s<<endl;
    for(int i=0;i<s.length();i++) {
    	cout<<(int)s[i]<<" ";
	}
	cout<<endl;
    convert_to_upper(t);
    cout<<t<<endl;
    for(int i=0;i<t.length();i++) {
		cout<<(int)t[i]<<" ";
	}
    return 0;
}
