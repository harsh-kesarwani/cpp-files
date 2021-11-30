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

bool partition (int arr[], int n)
{
	int sum = 0;
	int i, j;

	for (i = 0; i < n; i++)
	sum += arr[i];

	if (sum % 2 != 0)
	return false;

	bool part[n + 1][sum / 2 + 1];

	// initialize top row as false
	for (i = 0; i <= sum/2; i++)
        part[0][i] = false;

	// initialize leftmost column as true
	for (i = 0; i <= n; i++)
	part[i][0] = true;

	// Fill the partition table in botton up manner
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= sum/2; j++)
		{
			part[i][j] = part[i-1][j];
			if (j >= arr[i - 1])
			part[i][j] = part[i][j] ||
						part[i - 1][j - arr[i -1]];

		}
	}

	return part[n][sum/2];
}

bool alleven(vector<int> v) {
    for(auto x:v) {
        if(x%2) return false;
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int sum=0;
    for(auto &x:v) {
        cin>>x;
        sum+=x;
    }
    if(sum%2) {
        cout<<0<<endl;
        return;
    }
    int arr[n];
    for(int i=0;i<n;i++) arr[i]=v[i];
    if(!partition(arr,n)) {
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    while(alleven(v)) {
        for(auto &x:v) x/=2;
    }
    for(int i=0;i<n;i++) {
        if(v[i]%2) {
            cout<<i+1<<endl;
            return;
        }
    }
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	// cin>>T;
	T=1;
	while(T--) {
		solve();
	}
	return 0;
}