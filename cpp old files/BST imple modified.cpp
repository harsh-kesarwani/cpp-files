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

struct node {
	int key;
	node* left;
	node* right;
	node(int n) : key(n), left(NULL), right(NULL) {}
};

class BST {
private:
	node* root;
public:
	BST() : root(NULL) {}
	
	bool _search(node*, int);
	bool search(int val) {
		return _search(root,val);
	}

	// void insert(node*&, int);

	node* _insert(node*, int);
	void insert(int val) {
		root = _insert(root,val);
	} 
	
	node* _remove(node*, int);
	void remove(int val) {
		root = _remove(root,val);
	}

	void _preorder(node*);
	void preorder() {
		_preorder(root);
	}

	void _inorder(node*);
	void inorder() {
		_inorder(root);
	}

	void _postorder(node*);
	void postorder() {
		_postorder(root);
	}

};

bool BST::_search(node* root, int val) {
	if(root == NULL)
		return false;
	if(val == root->key)
		return true;
	if(val>root->key)
		return _search(root->right,val);
	else 
		return _search(root->left,val);
}

// void BST::insert(node*& root,int val) {
// 	if(root == NULL) {
// 		root = new node(val);
// 		return;
// 	}
// 	if(val>root->key)
// 		insert(root->right,val);
// 	else
// 		insert(root->left,val);
// }

node* BST::_insert(node* root, int val) {
	if(root == NULL)
		return new node(val);
	if(val>root->key)
		root->right = _insert(root->right,val);
	else
		root->left = _insert(root->left,val);
	return root;
}

node* findmin(node* root) {
	node* temp = root;
	while(temp->left != NULL)
		temp = temp->left;
	return temp;
}

node* findmax(node* root) {
	node* temp = root;
	while(temp->right != NULL)
		temp = temp->right;
	return temp;
}

node* BST::_remove(node* root, int val) {
	if(root == NULL)
		return root;
	if(val>root->key) {
		root->right = _remove(root->right,val);
		return root;
	}
	if(val<root->key) {
		root->left = _remove(root->left,val);
		return root;
	}
	//found
	//Case 1: No child
	if(root->left == NULL && root->right == NULL) {
		delete root;
		root = NULL;
	}
	//Case 2a: Only right child
	else if(root->left == NULL) {
		node* temp = root;
		root = root->right;
		delete temp;
	}
	//Case 2b: Only left child
	else if(root->right == NULL) {
		node* temp = root;
		root = root->left;
		delete temp;
	}
	//Case 3: Both children
	else {
		node* temp = findmin(root->right);
		root->key = temp->key;
		root->right = _remove(root->right,temp->key);
	}
	return root;
}

void BST::_preorder(node* root) {
	if(root == NULL) return;
	cout<<root->key<<" ";
	_preorder(root->left);
	_preorder(root->right);
}
	
void BST::_inorder(node* root) {
	if(root == NULL) return;
	_inorder(root->left);
	cout<<root->key<<" ";
	_inorder(root->right);
}

void BST::_postorder(node* root) {
	if(root == NULL) return;
	_postorder(root->left);
	_postorder(root->right);
	cout<<root->key<<" ";
}

int main() {
	io();

	BST b;
	// node* root = NULL;
	
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++) {
	// 	int a; cin>>a;
	// 	b.insert(a);
	// }

	b.insert(12);
	b.insert(15);
	b.insert(13);
	b.insert(3);
	b.insert(7);
	b.insert(17);
	b.insert(1);
	b.insert(5);
	b.insert(9);
	
	cout<<"inorder -> ";
	b.inorder();
	cout<<endl;
	cout<<"preorder -> ";
	b.preorder();
	cout<<endl;
	cout<<"postorder -> ";
	b.postorder();
	cout<<endl;
	
	// node* mn = findmin(root);
	// node* mx = findmax(root);
	// cout<<"min = "<<mn->key<<" max = "<<mx->key<<endl;
	
	cout<<b.search(13)<<" ";
	cout<<b.search(3)<<" ";
	cout<<b.search(20)<<" ";
	cout<<b.search(10)<<" ";
	cout<<endl;
	
	b.remove(1);
	b.remove(3);
	b.remove(10);
	b.remove(17);
	
	cout<<"inorder -> ";
	b.inorder();
	cout<<endl;
	cout<<"preorder -> ";
	b.preorder();
	cout<<endl;
	cout<<"postorder -> ";
	b.postorder();
	cout<<endl;
	
	// mn = findmin(root);
	// mx = findmax(root);
	// cout<<"min = "<<mn->key<<" max = "<<mx->key<<endl;
	
	return 0;
}
