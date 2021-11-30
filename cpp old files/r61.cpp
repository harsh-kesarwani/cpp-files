#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl "\n"
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int min_coins(int money, vi coin) {
	vi mincoinsfor(money+1);
	mincoinsfor[0]=0;
	for(int i=1;i<=money;i++) {
		mincoinsfor[i]=INT_MAX;
		for(int j=0;j<coin.size();j++)
			if(coin[j]<=i)
				mincoinsfor[i]=min(mincoinsfor[i],mincoinsfor[i-coin[j]]+1);
	}
	return mincoinsfor[money];
}

int main() {
    fastio;
    
    int money,n;
    cin>>money>>n;
    vi coin(n);
    for(int i=0;i<n;i++) {
    	cin>>coin[i];
	}
	for(int i=0;i<=money;i++)
	cout<<i<<" "<<min_coins(i,coin)<<endl;
    return 0;
}
