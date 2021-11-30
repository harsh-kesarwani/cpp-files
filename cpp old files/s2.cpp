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
	node* tail=NULL;
	for(int x:v) {
		if(head==NULL) {
			head=new node(x);
			tail=head;
		}
		else {
			tail->next=new node(x);
			tail=tail->next;
		}
	}
	return head;
}

void print_list(node* head) {
	while(head!=NULL) {
		cout<<head->data<<" ";
		head=head->next;
	}
}

void Delete(node *head) {
	if(head==NULL) return;
	Delete(head->next);
	delete head; 
}

int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int &x:v) cin>>x;
	node* head=parse(v);
	print_list(head);
	Delete(head);
	return 0;
}
