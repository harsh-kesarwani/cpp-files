#include <bits/stdc++.h>
using namespace std;

void io() {
	ios::sync_with_stdio(0); cin.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

struct node {
	int data;
	node* left;
	node* right;
	node(int x) : data(x), left(NULL), right(NULL) {}
};

class bst {
	node* root;
public:
	bst() : root(NULL) {}
	bool isempty() {
		return root == NULL;
	}
	void insert(int x) {
		insertRec(root,x);
	}
	void insertRec(node* &ptr, int x) {
		if(ptr == NULL) ptr = new node(x);
		else if(x>ptr->data) insertRec(ptr->right,x);
		else insertRec(ptr->left,x);
	}
	void preorder() {
		preorderRec(root);
	}
	void preorderRec(node* ptr) {
		if(ptr == NULL) return;
		cout<<ptr->data<<" ";
		preorderRec(ptr->left);
		preorderRec(ptr->right);
	}
	void postorder() {
		postorderRec(root);
	}
	void postorderRec(node* ptr) {
		if(ptr == NULL) return;
		postorderRec(ptr->left);
		postorderRec(ptr->right);
		cout<<ptr->data<<" ";
	}
	void inorder() {
		inorderRec(root);
	}
	void inorderRec(node* ptr) {
		if(ptr == NULL) return;
		inorderRec(ptr->left);
		cout<<ptr->data<<" ";
		inorderRec(ptr->right);
	}
};

int main() {
	io();
	int n;
	cin>>n;
	bst b;
	for(int i=0,x;i<n;i++) {
		cin>>x;
		b.insert(x);
	}
	cout<<"inorder"<<endl;
	b.inorder();
	cout<<endl<<"preorder"<<endl;
	b.preorder();
	cout<<endl<<"postorder"<<endl;
	b.postorder();
	return 0;
}