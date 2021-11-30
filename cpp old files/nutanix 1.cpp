#include <bits/stdc++.h>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void io() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	io();
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<vector<int>> v(5,vector<int>(n));
    for(int i=0;i<5;i++) {
        for(int j=0;j<n;j++)
            cin>>v[i][j];
    }
    vector<int> w(n);
    for(int i=0;i<n;i++) w[i]=i+1;
    vector<vector<int>> s(32,w);
    for(int i=0;i<32;i++) {
        for(int j=0;j<5;j++) {
            for(int k=0;k<n;k++) {
                if(i>>j & 1)
                    s[i][k]+=v[j][k];
                else
                    s[i][k]-=v[j][k];
            }
        }
    }
    // for(int i=0;i<32;i++) {
    //     for(int j=0;j<n;j++)
    //         cout<<s[i][j]<<" ";
    //     cout<<endl;
    // }
    int ans=0;
    for(int i=0;i<32;i++) {
        int mx = INT_MIN, mn = INT_MAX;
        for(int j=0;j<n;j++) {
         	mx=max(mx,s[i][j]);
            mn=min(mn,s[i][j]);
        }
        ans=max(ans,mx-mn);
    }
    cout<<ans;
}