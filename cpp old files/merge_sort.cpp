#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

#define endl "\n"
#define PI 3.1415926536

void merge(vector<int> &v, int l, int m, int r) {
	int n1=m-l+1;
	int n2=r-m;
	vector<int> vl(n1), vr(n2);
	for(int i=0;i<n1;i++) {
		vl[i]=v[l+i];
	}
	for(int i=0;i<n2;i++) {
		vr[i]=v[m+1+i];
	}
	int i=0,j=0,k=l;
	while(i<n1&&j<n2) {
		if(vl[i]<vr[j]) {
			v[k]=vl[i];
			i++;
		}
		else {
			v[k]=vr[j];
			j++;
		}
		k++;
	}
	while(i<n1) {
		v[k]=vl[i];
		i++;k++;
	}
	while(j<n2) {
		v[k]=vr[j];
		j++;k++;
	}
}

void merge_sort(vector<int> &v, int l, int r) {
	if(l<r) {
		int m=l+(r-l)/2;
		merge_sort(v,l,m);
		merge_sort(v,m+1,r);
		merge(v,l,m,r);
	}
}

void print_array(vector<int> v) {
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    	cin>>v[i];
    cout<<"Initial Array - ";
    print_array(v);
    merge_sort(v,0,v.size()-1);
    cout<<"Sorted Array - ";
    print_array(v);
    return 0;
}
 
