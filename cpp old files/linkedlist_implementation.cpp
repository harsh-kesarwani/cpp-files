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
	int data;
	node* next;
	node* prev;
};

node* head = NULL;
node* tail = NULL;

node* getnewnode(int x) {
	node* nodeptr = new node;
	nodeptr->data = x;
	nodeptr->next = NULL;
	nodeptr->prev = NULL;
	return nodeptr;
}

void pushfront(int x) {
	node* nodeptr = getnewnode(x);
	if(head == NULL) {
		head = nodeptr;
		tail = nodeptr;
		return;
	}
	head->prev = nodeptr;
	nodeptr->next = head;
	head = nodeptr;
}

void pushback(int x) {
	node* nodeptr = getnewnode(x);
	if(tail == NULL) {
		head = nodeptr;
		tail = nodeptr;
		return;
	}
	tail->next = nodeptr;
	nodeptr->prev = tail;
	tail = nodeptr; 
}

void popfront() {
	if(head == NULL) {
		cout<<"ERROR - List is empty"<<endl;
		return;
	}
	if(head == tail) {
		head = NULL;
		tail = NULL;
		return;
	}
	head = head->next;
	head->prev = NULL;
}

void popback() {
	if(tail == NULL) {
		cout<<"ERROR - List is empty"<<endl;
		return;
	}
	if(head == tail) {
		head = NULL;
		tail = NULL;
		return;
	}
	tail = tail->prev;
	tail->next = NULL;
}

void print() {
	node* temp = head;
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void reverseprint() {
	node* temp = tail;
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<endl<<endl;
}

int main() {
	io();
	pushback(2);
	pushfront(5);
	pushfront(-1);
	pushback(3);
	print();
	reverseprint();
	popback();
	pushback(4);
	pushback(5);
	print();
	reverseprint();
	popback();
	popfront();
	popfront();
	popfront();
	pushfront(-3);
	print();
	reverseprint();
	return 0;
}
