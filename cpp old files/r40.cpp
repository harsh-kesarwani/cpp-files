#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

struct point {
	int x,y;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--) {
    	int n,m;
    	cin>>n>>m;
    	vector<int> v(n);
    	for(int i=0;i<n;i++) {
    		cin>>v[i];
    		v[i]-=(i+1);
		}
		vector<point> p(m);
		for(int i=0;i<m;i++) {
			cin>>p[i].x>>p[i].y;
		}
		int cnt=0,temp=0,ref=0;
		for(int i=0;i<n;i++) {
			if(v[i]!=0) {
				ref=i;
				cnt++;
				temp=v[i];
				v[i]+=v[i+v[i]];
				v[i+temp]=0;
				i=ref-1;
			}
		}
		cout<<cnt<<endl;
	}
    return 0;
}
 
