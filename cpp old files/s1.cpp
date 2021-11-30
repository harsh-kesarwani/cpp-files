#include<bits/stdc++.h>
using namespace std;

class node {
	public:
		int data;
		node* next;
		node(int x) {
			data=x;
			next=NULL;
		}
};

node* parse(vector<int> v) {
	node* head=NULL;
	for(int &x:v) {
		if(head==NULL) head=new node(x);
		else {
			node* temp=head;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=new node(x);
		}
	}
	return head;
}

void print_list(node* ptr) {
	while(ptr!=NULL) {
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
}

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int &x:v) cin>>x;
	node* head=parse(v);
	print_list(head);
}
