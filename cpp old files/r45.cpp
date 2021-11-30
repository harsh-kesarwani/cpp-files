#include <bits/stdc++.h>

using namespace std;

// Complete the counterGame function below.
string counterGame(long n) {
    string s="Louise";
    int cnt=0,i=0;
    while(true) {
        if(!(n&(1<<i))) cnt++;
        else break;
        i++;
    }
    for(int j=cnt;(1<<j)<=n;j++) {
        if(n&(1<<j)) cnt++;
    }
    if(cnt&1) s="Richard";
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = counterGame(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

