#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
string counterGame(long n) {
    string s="Louise";
    int cnt=0;
    while(!(n&1)) {
        cnt++;
        n>>1;
    }
    while(n) {
        if(n&1) cnt++;
        n>>1;
    }
    if(cnt&1) s="Richard";
    return s;
}

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long n;
        cin >> n;

        string result = counterGame(n);

        cout << result << "\n";
    }

    return 0;
}

