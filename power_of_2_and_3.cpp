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

const int N = 2e7;
vector<int> ans;

void solve() {
    int power_of_2 = 1;
    while(power_of_2 < N) {
        int product = power_of_2;
        while(product < N) {
            ans.push_back(product);
            product *= 3;
        }
        power_of_2 *= 2;
    }
    sort(ans.begin(),ans.end());
}

int solution(int n) {
    const int N = 2e7;
    vector<int> ans;
    int power_of_2 = 1;
    while(power_of_2 < N) {
        int product = power_of_2;
        while(product < N) {
            ans.push_back(product);
            product *= 3;
        }
        power_of_2 *= 2;
    }
    sort(ans.begin(),ans.end());
    return ans[n];
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	// solve();
    // for(int i=0;i<=200;i++) {
    //     cout<<ans[i]<<endl;
    // }


    int N;
    cin>>N;
    cout<<solution(N);
	return 0;
}