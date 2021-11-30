#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node *next;
		//node(){};
		node (int x) {
			data=x;
			next=NULL;
		}
};

node* createNode() {
	node* temp;
	temp=new node;
	return temp;
}

int main() {
	node *start=NULL;
	node *ptr=createNode();
	return 0;
}
