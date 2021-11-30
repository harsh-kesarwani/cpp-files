#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi; 

#define endl '\n'
#define PI 3.1415926535897932384626
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastio;
    
    //int t;
    //cin>>t;
    vector<int> v;
    for(int i=1;i<=100000;i++)
        v.push_back(i*(3*i+1)/2);
    for(int i=0;i<20;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
	//int n;
	//cin>>n;
	//cout<<upper_bound(v.begin(),v.end(),3)-v.begin();
    std::vector<int>::iterator upper1; 
  
    // std :: upper_bound 
    upper1 = std::upper_bound(v.begin(), v.end(), 3);
  
    std::cout << "\nupper_bound for element 3 is at position : " 
              << (upper1 - v.begin()); 
	return 0;
}
