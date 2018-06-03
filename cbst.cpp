#include<iostream>
using namespace std;
class node
{
	public:
	node *left,*right;
	int data;
	node(int x)
	{
		data=x;
		left=right=NULL;
	}

};
class bst
{
	public:
	node *root;
	bst()
	{
		root=NULL;
	}
	void insert(int y)
	{
		node *p,*q,*r;
		cout<<"\n HEYA";
		r=new node(y);
		if(root==NULL)
		{
			root=r;
			return;		
		}
		p=root;
		while(p!=NULL)
		{
			q=p;
			if(y>p->data)
				p=p->right;
			else
				p=p->left;
		}
		if(y>q->data)
		{
			q->right=r;
		}
		else
			q->left=r;
	}
	void create()
	{
		int n,x,i;
		node *p,*q,*r;
		cout<<"\n Enter the no. of nodes:";
		cin>>n;
		cout<<"\n Enter the nodes:";
		for(i=0;i<n;i++)
		{
			cin>>x;
			insert(x);
		}
		
	}
	
	void dispinorder()
	{
		dispinorder(root);
	}
	void dispinorder(	
	{
		if(T!=NULL)
		{
			dispinorder(T->left);
			cout<<"\n"<<T->data;
			dispinorder(T->right);
			
		}
	}
};
int main()
{
	bst b;
	b.create();
	b.dispinorder();
	return 0;
	
}
