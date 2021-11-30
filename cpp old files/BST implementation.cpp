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
public:
	bool search(node*, int);
	// void insert(node*&, int);
	node* insert(node*, int);
	node* remove(node*, int);
	void preorder(node*);
	void inorder(node*);
	void postorder(node*);
};

bool BST::search(node* root, int val) {
	if(root == NULL)
		return false;
	if(val == root->key)
		return true;
	if(val>root->key)
		return search(root->right,val);
	else 
		return search(root->left,val);
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

node* BST::insert(node* root, int val) {
	if(root == NULL)
		return new node(val);
	if(val>root->key)
		root->right = insert(root->right,val);
	else
		root->left = insert(root->left,val);
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

node* BST::remove(node* root, int val) {
	if(root == NULL)
		return root;
	if(val>root->key) {
		root->right = remove(root->right,val);
		return root;
	}
	if(val<root->key) {
		root->left = remove(root->left,val);
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
		root->right = remove(root->right,temp->key);
	}
	return root;
}

void BST::preorder(node* root) {
	if(root == NULL) return;
	cout<<root->key<<" ";
	preorder(root->left);
	preorder(root->right);
}
	
void BST::inorder(node* root) {
	if(root == NULL) return;
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

void BST::postorder(node* root) {
	if(root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->key<<" ";
}

int main() {
	io();

	BST b;
	node* root = NULL;
	root = b.insert(root,12);
	root = b.insert(root,15);
	root = b.insert(root,13);
	root = b.insert(root,3);
	root = b.insert(root,7);
	root = b.insert(root,17);
	root = b.insert(root,1);
	root = b.insert(root,5);
	root = b.insert(root,9);
	cout<<"inorder -> ";
	b.inorder(root);
	cout<<endl;
	cout<<"preorder -> ";
	b.preorder(root);
	cout<<endl;
	cout<<"postorder -> ";
	b.postorder(root);
	cout<<endl;
	node* mn = findmin(root);
	node* mx = findmax(root);
	cout<<"min = "<<mn->key<<" max = "<<mx->key<<endl;
	cout<<b.search(root,13)<<" ";
	cout<<b.search(root,3)<<" ";
	cout<<b.search(root,20)<<" ";
	cout<<b.search(root,10)<<" ";
	cout<<endl;
	root = b.remove(root,1);
	root = b.remove(root,3);
	root = b.remove(root,10);
	root = b.remove(root,17);
	cout<<"inorder -> ";
	b.inorder(root);
	cout<<endl;
	cout<<"preorder -> ";
	b.preorder(root);
	cout<<endl;
	cout<<"postorder -> ";
	b.postorder(root);
	cout<<endl;
	mn = findmin(root);
	mx = findmax(root);
	cout<<"min = "<<mn->key<<" max = "<<mx->key<<endl;
	return 0;
}
