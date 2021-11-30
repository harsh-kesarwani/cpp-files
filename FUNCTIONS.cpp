#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

//		  n - 0 1 2 3 4 5 6  7  8  9 10 ...
//fibonacci - 0 1 1 2 3 5 8 13 21 34 55 ...

int fib(int n) {
    if(n==0) return 0;
    int prev=0,curr=1;
    for(int i=2;i<=n;i++) {
        int new_curr=prev+curr;					
        prev=curr; curr=new_curr;					
    }
    return curr;
}

int gcd(int a,int b) {
    if(b==0) return a;
    return gcd(b,a%b);
}

int gcd_of_array(vector<int> v) {
    int result=v[0];
    for(int i=0;i<v.size();i++) {
        result=gcd(result,v[i]);
        if(result==1) break;
    }
    return result;
}

int lcm(int a,int b) {
	return (a*b)/gcd(a,b);
}

//sum of digits
int sod(ll n) {
    int ans=0;
    while(n) {
        ans+=n%10;
        n/=10;
    }
    return ans;
}

//for n>0
int smallest_divisor(int n) {
    if(n%2==0) return 2;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0) return i;
    return n;
}


int modd(int a, int m) { 
    return (a%m + m) % m; 
} 

//recursive binary search
int binary_search(vector<int> v, int x, int l, int r) {
	if(r>=l) {
		int mid=(l+r)/2;
		if(x==v[mid]) return mid;
		if(x<v[mid]) return binary_search(v,x,l,mid-1);
		return binary_search(v,x,mid+1,r);		
	}
	return -1;
}

//iterative binary search
// int binary_search(const vector<int> &v, int x, int l, int r) {
// 	while(r>=l) {
// 		int mid=(l+r)/2;
// 		if(x==v[mid]) return mid;
// 		else if(x<v[mid]) r=mid-1;
// 		else l=mid+1;		
// 	}
// 	return -1;
// }

void merge(vector<int> &v, int l, int m, int r) {
	int n1=m-l+1, n2=r-m, in=l;
	vector<int> left(n1), right(n2);
	for(int &x:left) x=v[in++];
	for(int &x:right) x=v[in++];
	
	int i=0,j=0,k=l;
	while(i<n1 && j<n2) v[k++] = (left[i]<right[j] ? left[i++] : right[j++]);
	while(i<n1) v[k++]=left[i++];
	while(j<n2) v[k++]=right[j++];
}

void merge_sort(vector<int> &v, int l, int r) {
	if(l>=r) return;
	int m=l+(r-l)/2;
	merge_sort(v,l,m);
	merge_sort(v,m+1,r);
	merge(v,l,m,r);
}

int partition(vector<int> &v, int l, int r) {
	int pi=l-1, pivot=v[r];
	for(int i=l;i<=r;i++)
		if(v[i]<=pivot)
			swap(v[i],v[++pi]);
	return pi;
}

void quick_sort(vector<int> &v, int l, int r) {
	if(l>=r) return;
	int pi=partition(v,l,r);
	quick_sort(v,l,pi-1);
	quick_sort(v,pi+1,r);
}

void selection_sort(vector<int> &v) {
	for(int i=0;i<v.size();i++) {
		int min_i=i;
		for(int j=i+1;j<v.size();j++)
			if(v[min_i]>v[j]) min_i=j;
		swap(v[i],v[min_i]);
	}
}

void bubble_sort(vector<int> &v) {
	for(int i=v.size()-1;i>0;i--)
		for(int j=0;j<i;j++)
			if(v[j]>v[j+1])
				swap(v[j],v[j+1]);
}

void insertion_sort(vector<int> &v) {
	for(int i=1;i<v.size();i++) {
		int key=v[i],j=i;
		while(j>0 && v[j-1]>key) {v[j]=v[j-1];j--;}
		v[j]=key;
	}
}

void convert_to_upper(string &s) {
	for(int i=0;i<s.length();i++) {
		if(s[i]>='a'&&s[i]<='z')
			s[i]+=('A'-'a');
	}
}

void convert_to_lower(string &s) {
	for(int i=0;i<s.length();i++) {
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=('a'-'A');
	}
}

bool isprime(int n) {
	if(n==1) return false;
	for(int i=2;i*i<=n;i++) {
		if(n%i==0) return false;
	}
	return true;
}

//sqrt(n)/2
bool isprime(int n) {
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(int i=3;i*i<=n;i+=2) {
		if(n%i==0) return false;
	}
	return true;
}

const int N = 1e7;
bool prime[N+1];

void sieve() {
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int p=2;p*p<=N;p++) {
		if(prime[p]) {
			for(int i=p*p;i<=N;i+=p)
				prime[i]=false;
		} 
	}
}

const int N = 1e6;
int spf[N+1];

void smallestprimefactor() {
	spf[1]=1;
	for(int i=2;i<=N;i++) {
		if(spf[i]) continue;
		spf[i]=i;
		for(ll j=i*1LL*i;j<=N;j+=i)
			if(spf[j]==0) spf[j]=i; 
	}
}

//recursive
int powm(int x, int n) {
	if(n==0) return 1;
	ll u=powm(x,n/2);
	(u*=u)%=mod;
	if(n%2) (u*=x)%=mod;
	return u;
}

//iterative ll
ll powm(ll x, ll n) {
	ll res=1;
	while(n) {
		if(n%2) res=(res*x)%mod;
		x=(x*x)%mod;
		n/=2;
	}
	return res;
}

// int mul(int x, int y) {
// 	return (x*1LL*y)%mod;
// }

// //iterative again using mul function
// int powm(int x, int n) {
// 	int res=1;
// 	while(n) {
// 		if(n%2) res=mul(res,x);
// 		x=mul(x,x);
// 		n/=2;
// 	}
// 	return res;
// }

// int div(int x, int y) {
// 	return mul(x,powm(y,mod-2));
// }

const int MAX = 1e6;
int fac[MAX+1];

void factorial() {
	fac[0]=1;
	for(int i=1;i<=MAX;i++)
		fac[i]=(fac[i-1]*1LL*i)%mod;
}

int C(int n, int k) {
	ll val = fac[n];
	(val *= powm(fac[k],mod-2)) %= mod;
	(val *= powm(fac[n-k],mod-2)) %= mod;
	return val;
}

struct node {
	int data;
	node* next;
};

node* reverseList(node* head) {
    node *next = head, *prev = NULL;
    while(next != NULL) {
        head = next;
        next = head->next;
        head->next = prev;
        prev = head;
    }
    return head;
}

// dsu
const int N = 1e5;
int par[N+1], size[N+1];

void initialize() {
	for(int i=1;i<=N;i++) {
        par[i]=i;
        size[i]=1;
    }
}

int find(int x) {
    while(x!=par[x]) x=par[x];
    return x;
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);
    if(size[a]<size[b]) swap(a,b);
    size[a]+=size[b];
    par[b]=a;
}

bool same(int a, int b) {
    return find(a)==find(b);
}


int main()
{
    ios::sync_with_stdio(0); cin.tie(0);
    
    //int n;
    //cin>>n;
    //cout<<fib(n)<<'\n';
    
	//int a,b;
    //cin>>a>>b;
    //vector<int> v;
    //for(int i=0;i<n;i++) cin>>v[i];
	//cout<<gcd(a,b)<<'\n';
	//cout<<gcd_of_array(v)<<'\n';
	//cout<<lcm(a,b)<<'\n';
	//cout<<smallest_divisor(n)<<'\n';
	//cout<<modd(a,b)<<'\n';
	//binary_search(arr,x,0,arr.size()-1);
	//merge_sort(v,0,v.size()-1);
	//quick_sort(v,0,v.size()-1);
	//selection_sort(v);
	//bubble_sort(v);
	//insertion_sort(v);
	
	//string s;
	//convert_to_upper(s);
	//convert_to_lower(s);
    //sieve();
    //smallestprimefactor();
	//cout<<powm(a,b)<<endl;
	//cout<<mul(a,b)<<endl;
	//cout<<div(a,b)<<endl;
	//factorial();
	//cout<<C(n,k)<<endl;
	//node* rhead = reverseList(head);
    return 0;
}
 
