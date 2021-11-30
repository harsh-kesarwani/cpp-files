#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 

#define endl "\n"
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int limit=26;

void count_freq(string s) {
	vector<int> count(limit);
	for(int i=0;i<s.length();i++) {
		count[s[i]-'A']++;
	}
	for(int i=0;i<limit;i++) {
		if(count[i]) {
			cout<<(char)(i+'A')<<" "<<count[i]<<endl;
		}
	}
}

int main() {
    fastio;
    
    string s;
    getline(cin,s);
    count_freq(s);
    return 0;
}
