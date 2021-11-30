#include <bits/stdc++.h>
using namespace std;

int compute_min_refills(int dist,int tank,vector<int>& stops) {
    int n=stops.size();
	stops.insert(stops.begin(),0);
    stops.push_back(dist);
    int i=0,ref=0,cnt=0;
    while(i<=n)
    {
    	ref=i;
    	while(i<=n&&stops[i+1]-stops[ref]<=tank) i++;
    	if(i==ref) {cnt=-1;break;}
    	if(i<=n) cnt++;
	}
    return cnt;
}


int main() {
    int d=0,m=0,n=0;
    cin>>d>>m>>n;
    vector<int> stops(n);
    for(int i=0;i<n;i++)
		cin>>stops[i];

    cout<<compute_min_refills(d,m,stops)<<"\n";

    return 0;
}
