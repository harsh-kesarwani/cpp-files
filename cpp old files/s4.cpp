#include<bits/stdc++.h>
using namespace std;

class stu {
	public:
	string name;
	int rollno;
	int phy_marks;
	int che_marks;
	float avg;
		stu(string s, int r, int p, int c) {
			name=s;
			rollno=r;
			phy_marks=p;
			che_marks=c;
			avg=(p+c)/2.0;
		}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<string> nm(n);
	vector<int> rn(n), pm(n), cm(n);
	vector<stu> v;
	for(int i=0;i<n;i++) {
		cin>>nm[i]>>rn[i]>>pm[i]>>cm[i];
		v.push_back(stu(nm[i],rn[i],pm[i],cm[i]));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++) {
		cout<<v[i].name<<'\t'<<v[i].rollno<<'\t'<<v[i].phy_marks<<'\t'<<v[i].che_marks<<'\t'<<v[i].avg<<endl;
	}
	return 0;
}
