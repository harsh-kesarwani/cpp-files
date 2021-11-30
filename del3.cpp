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

struct site
{
    int number =23;
};

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	// int T;
	// cin>>T;
	// T=1;
	// while(T--) {
	// 	string s;
    //     cin>>s;
    //     printGrouped(s);
	// }
    // int num = 0;
    // const int* cptr = &num;
    // *(const_cast<int*>(cptr)) =2;
    // cout<<num<<endl;

    struct site *ptr, x;
    // x.number = 23;
    // ptr = (struct site *)&x.number;
    cout<<(++ptr->number);
	return 0;
}
