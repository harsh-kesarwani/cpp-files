#include <bits/stdc++.h>
using namespace std;

void io() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

class HashTable {
private:
	int bucket;
	list<int>* row;
	int h(int key) {
		return key%bucket;
	}
public:
	HashTable(int b) {
		bucket = b;
		row = new list<int>[b];
	}
	void insert(int key) {
		int i = h(key);
		row[i].push_back(key);
	}
	void remove(int key) {
		int i = h(key);
		for(auto it = row[i].begin(); it != row[i].end(); it++) {
			if(*it == key) {
				row[i].erase(it);
				break;
			}
		}
	}
	void display() {
		for(int i=0;i<bucket;i++) {
			cout<<i;
			for(auto x:row[i])
				cout<<" --> "<<x;
			cout<<endl;
		}
	}
};

int main() {
	io();
	int n,b;
	cin>>n>>b;
	HashTable ht(b);
	for(int i=0;i<n;i++) {
		int a; cin>>a;
		ht.insert(a);
	}
	ht.remove(25);
	ht.remove(11);
	ht.display();
	return 0;
}
