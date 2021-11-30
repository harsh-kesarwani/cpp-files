#include <bits/stdc++.h>
using namespace std;
#define sq(x) (x)*(x)
#define EPS 1e-9

void io() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

struct point {
	int x,y;
	point(int x, int y) : x(x), y(y) {}
};

struct line {
	int a,b,c;
	line(int a, int b, int c) : a(a), b(b), c(c) {}
};

double dist(double x, double y, point p) {
	return sqrt(sq(x-p.x)+sq(y-p.y));
}

double computeDist(const vector<point> &v, line l, double x) {
	double y=-1*(l.c+l.a*x)/l.b;
	double res=0;
	for(int i=0;i<v.size();i++) {
		res+=dist(x,y,v[i]);
	}
	return res;
}

double minTotalDist(const vector<point> &v, line l) {
	double low=-1e9;
	double high=1e9;
	
	while(high-low>EPS) {
		
		double mid1=low+(high-low)/3;
		double mid2=high-(high-low)/3;

		double dist1=computeDist(v,l,mid1);
		double dist2=computeDist(v,l,mid2);

		if(dist1<dist2) high=mid2;
		else low=mid1;
	}
	return computeDist(v,l,(low+high)/2);
}

int main() {
	io();
	
	int a,b,c,n;
	cin>>a>>b>>c,n;
	line l(a,b,c);
	int x,y;
	vector<point> v;
	for(int i=0;i<n;i++) {
		cin>>x>>y;
		v.push_back(point(x,y));
	}
	cout<<minTotalDist(v,l)<<endl;
	return 0;
}
