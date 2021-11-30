#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

const int bc=0; //x
const int yc=1; //y
const int wc=2; //z
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    int x,y,z;
    cin>>x>>y>>z;
    int num=x+y+z;
    int input;
    vector<int> v;
    for(int i=0;i<num;i++) {
        cin>>input;
        v.push_back(input);
    }    
    vector<int> colour;
    for(int i=0;i<x;i++) colour.push_back(bc);
    for(int i=0;i<y;i++) colour.push_back(yc);
    for(int i=0;i<z;i++) colour.push_back(wc);
    
    for(int i=0;i<num-1;i++) {
        for(int j=0;j<num;j++) {
            if(v[i]<v[j]) {
                swap(v[i],v[j]);
                swap(colour[i],colour[j]);
            }
        }
    }
    ll sum=0;
    for(int i=0;i<num;i++) {
        if(((colour[i]==bc)||(colour[i]==wc))&&(n>0)) {
            sum+=v[i];
            n--;
        }
        else if(((colour[i]==yc)||(colour[i]==wc))&&(m>0)) {
            sum+=v[i];
            m--;
        }
        if(m==0&&n==0) break;
    }
    cout<<sum<<endl;
    return 0;
}
 
