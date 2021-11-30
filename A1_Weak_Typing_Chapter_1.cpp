#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// freopen("/home/harsh/Downloads/weak_typing_chapter_1_input.txt", "r", stdin);
	// freopen("/home/harsh/Downloads/weak_typing_chapter_1_output.txt", "w", stdout);
	// #endif
}

int solve() {
    int n;
	string s;
    cin>>n>>s;
    int i=0;
    while(i<n && s[i]=='F') i++;
    if(i==n) return 0;
    int cnt = 0;
    char cur = s[i];
    for(int j=i;j<n;j++) {
        if(s[j]=='X' && cur=='O') {
            cur = 'X';
            cnt++;
        }
        else if(s[j]=='O' && cur=='X') {
            cur = 'O';
            cnt++;
        }
    }
    return cnt;
}

int main() {
    io();
	int T;
	cin>>T;
    int cs = 0;
	while(T--) {
		cout<<"Case #"<<++cs<<": "<<solve()<<endl;
	}
	return 0;
}