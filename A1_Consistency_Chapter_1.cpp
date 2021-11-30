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
	#ifndef ONLINE_JUDGE
	freopen("/home/harsh/Downloads/consistency_chapter_1_input.txt", "r", stdin);
	freopen("/home/harsh/Downloads/outputA1final.txt", "w", stdout);
	#endif
}

bool isvowel(char x) {
    return x=='A' || x=='E' || x=='I' || x=='O' || x=='U';
}

int solve(string s) {
    int n = s.size();
    vector<int> cnt(26,0);
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(auto x:s) cnt[x-'A']++;
    int v_cnt = cnt['A'-'A']+cnt['E'-'A']+cnt['I'-'A']+cnt['O'-'A']+cnt['U'-'A'];
	int c_cnt = n - v_cnt;
    int mn = 1000;
    for(auto x:alp) {
        if(isvowel(x))
            mn = min(mn,c_cnt + 2*(v_cnt-cnt[x-'A']));
        else
            mn = min(mn,v_cnt + 2*(c_cnt-cnt[x-'A']));
    }
    return mn;
}

int main() {
	io();
	int T;
	cin>>T;
	// T=1;
    int cs = 1;
	while(T--) {
        string s;
        cin>>s;
		cout<<"Case #"<<cs++<<": " <<solve(s)<<endl;
	}
	return 0;
}