#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node *next;
		node(int n) {
			data=n;
			next=NULL;
		}
};

void print_list(node* ptr) {
	while(ptr!=NULL) {
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

int main() {
	//node *head=NULL;
	//node *second=NULL;
	//node *third=NULL;
	
	node* head=new node(1);
	node* second=new node(2);
	node* third=new node(5);
	
	//head->data=1;
	head->next=second;
	
	//second->data=2;
	second->next=third;
	
	//third->data=4;
	//third->next=NULL;
	
	print_list(head);
	return 0;
}
