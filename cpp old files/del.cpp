# include <iostream>
using namespace std;
struct bt
{
	int info;
	int lcount;
	bt* father;
	bt *left;
	bt *right;
};
bt* findk(bt *root,int k)
{
	int r=k;
	bt *ptr=root;
	while(!(ptr->left==NULL&&ptr->right==NULL))
	{
		if(r<=ptr->lcount)
		{
			ptr=ptr->left;
		}
		else
		{
			r-=ptr->lcount;
			ptr=ptr->right;
		}
	}
	return ptr;
}
void deletek(bt **root,int k)
{
	bt *ptr=findk(*root,k);
	if(ptr==*root)
	{
		*root=NULL;
		delete(ptr);
		return;
	}
	bt *f=ptr->father;
	bt *b; 
	if(ptr==f->left)
	{
		f->left=NULL;
		b=f->right;
		(f->lcount)--;
	}
	else
	{
		f->right=NULL;
		b=f->left;
	}
	if(b->lcount==0)//leaf node,move up
	{
		f->info=b->info;
		f->left=NULL;
		f->right=NULL;
		f->lcount=0;
		delete(b);
	}
	else
	{
		delete(ptr);
	}
	//climbing up to the root to adjust the lcount
	bt* q=f;
	while(q!=*root)
	{
		f=q->father;
		if(q==f->left)
		{
			(f->lcount)--;
			b=f->right;
		}
		else b=f->left;
		if(b==NULL&&q->lcount==0)
		{
			f->info=q->info;
			f->left=f->right=NULL;
			f->lcount=0;
			delete(q);
		}
		q=f;
	}
}
bt* newnode(int info,int lcount)
{
	bt *node=new bt;
	node->left=node->right=NULL;
	node->info=info;
	node->lcount=lcount;
}
void print(bt *root)
{
	if(root!=NULL)
	{
		print(root->left);
		if(root->lcount==0) cout<<root->info<<" ";
		print(root->right);
	}
}
int main()
{
	bt *root=newnode(0,2);
	root->left=newnode(0,1);
	root->right=newnode(0,1);
	root->left->father=root;
	root->right->father=root;
	root->left->left=newnode(1,0);
	root->left->left->father=root->left;
	root->left->right=newnode(2,0);
	root->left->right->father=root->left;
	root->right->left=newnode(3,0);
	root->right->left->father=root->right;
	root->right->right=newnode(4,0);
	root->right->right->father=root->right;
	cout<<"Created linked list = ";
	print(root);
	cout<<"\n";
	cout<<"Deleting third element"<<"\n";
	deletek(&root,3);
	cout<<"Linked list after deletion = ";
	print(root);
	cout<<"\n";
	return 0;
}

