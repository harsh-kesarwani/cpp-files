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
#define INF 10000000

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("/home/harsh/Downloads/consistency_chapter_2_input.txt", "r", stdin);
	freopen("/home/harsh/Downloads/outputA2final.txt", "w", stdout);
	#endif
}

const int N = 26;
int dist[N][N];

int solve() {
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            if(i==j) dist[i][j]=0;
            else dist[i][j] = INF;
        }
    }
    string s,edge;
    int k;
    cin>>s>>k;
    for(int i=0;i<k;i++) {
        cin>>edge;
        dist[edge[0]-'A'][edge[1]-'A'] = 1;
    }
    for(int z=0;z<N;z++) {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                dist[i][j] = min(dist[i][j],dist[i][z]+dist[z][j]);
            }
        }
    }
    int ans = INF;
    for(int j=0;j<N;j++) {
        bool inf = false;
        int sum = 0;
        for(auto x:s) {
            if(dist[x-'A'][j] == INF) {
                inf = true;
                break;
            }
            sum += dist[x-'A'][j];
        }
        if(!inf) ans = min(ans,sum);
    }
    return (ans==INF ? -1 : ans);
}

int main() {
	io();
	int T;
	cin>>T;
    int cs = 1;
	while(T--) {
		cout<<"Case #"<<cs++<<": " <<solve()<<endl;
	}
	return 0;
}