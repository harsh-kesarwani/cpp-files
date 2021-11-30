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
    
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++) {
    	if(s[i]>='A'&&s[i]<='Z')
    		s[i]+='a'-'A';
    	cout<<s[i];
	}
    return 0;
}
