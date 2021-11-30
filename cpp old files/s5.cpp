#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> x, pair<int,int> y) {
	return x.second>y.second;
}

int main() {
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	int x,y;
	for(int i=0;i<n;i++) {
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<n;i++) {
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;
}
