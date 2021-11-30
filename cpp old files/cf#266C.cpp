#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

vector<int> modified_vector(vector<int> v) {
	vector<int> temp;
	//write code
	return temp;
}

ll get_index(vector<ll> v, ll index, ll sum) {
    ll s=0;
    for(ll i=index;i<v.size();i++) {
        s+=v[i];
        if(s==sum) return i;
        if(s>sum) return -1LL;
    }
    return -1LL;
}

ll next_nonzero(vector<ll> v, ll index) {
    ll temp=1;
    for(int i=index+1;i<v.size();i++) {
        if(v[i]==0) temp++;
        else return temp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<ll> v(n);
    ll sum=0;
    bool allzero=true;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
        if(v[i]!=0) allzero=false;
    }
    if(sum%3!=0) {
         cout<<0<<endl;
         return 0;
    } 
    if(allzero) {
        cout<<(n-1)*(n-2)/2<<endl;
        return 0;
    }
    //modify_vector
    vector<ll> mv;
    mv=modified_vector(v);
    ll in1=get_index(mv,0LL,sum/3);
    if(in1==-1) {
        cout<<0;
        return 0;
    }
    ll a1=next_nonzero(mv,in1);
    ll in2=get_index(mv,in1+a1,sum/3);
    if(in2==-1) {
        cout<<0;
        return 0;
    }
    ll a2=next_nonzero(mv,in2);
    cout<<a1*a2<<endl;
    return 0;
}
 
