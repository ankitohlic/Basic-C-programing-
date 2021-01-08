#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
}*root;
void insert(struct node *tp)
{
	struct node *t;
	t=(struct node *)malloc(sizeof(struct node));
	struct node *p,*c;
	p=tp;
	c=tp;
	printf("/nEnter the data of node : ");
	scanf("%d",&t->data);
	t->left=NULL;
	t->right=NULL;
	if(root==NULL)
	{
		root=t;
	}
	else
	{
		while(c)
		{
			p=c;
			if(c->data>t->data)
			{
				c=c->left;
			}
			else
			{
				c=c->right;
			}
		}
		if(p->data<t->data)
		{
			p->right=t;
		}
		else
		{
			p->left=t;
		}
	}
}
void inorder(struct node *par)
{
	if(par->left!=null)
	{
		inorder(par->left);
	}
	else
	{
		printf("%d",&par->data);
		if(par->right!=NULL)
		inoder(par->right);
		else
		par
	}
}
void display()
{
	int ch;
	printf("/n1.INORDER/n2.POSTORDER/n3.PREORDER : ");
	scanf("%d",&ch);
	struct node *tree;
	tree=root;
	switch(ch)
	{
		case 1:
			{inorder(root);
			}
		case 2:
			{
			}
		case 3:
			{
			}
		default :
			{
			}
	}
}
void main()
{
	root=NULL;
	int ch;
	do
	{
		printf("/n1.INSERT/n2.DELETE/n3.DISPLAY/n4.EXIT /nYour choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert(root);
				break;
			case 2:
			//	del(root);
				break;
			case 3:
			//	display(root);
				break;
			case 4:
				break;
			default :
				printf("\nINVALID INPUT");
		}
	}while(ch!=4);
}
