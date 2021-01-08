#include<stdio.h>
#include<stdlib.h>
struct link{
	int info;
	struct link *next;
};
struct link *start;
void create(struct link *);
void merge(struct link *,struct link *,struct link *);
void display(struct link *);
void main()
{
	struct link *node1,*node2,*node3;
	node1=(struct link *)malloc(sizeof(struct link));
	node2=(struct link *)malloc(sizeof(struct link));
	node3=(struct link *)malloc(sizeof(struct link));
	printf("\n Creating first list ! ");
	create(node1);
	printf("\n Creating second list ! ");
	create(node2);
	merge(node1,node2,node3);
	printf("\n Value of node in the 1st list as ");
	display(node1);
	printf("\n Value of node in the 2nd list as ");
	display(node2);
	printf("\n Value of node after mergeing as ");
	display(node3);
}
void create(struct link *node)
{
	char ch; int i=1;
	printf("\n Enter the value for %d node",i);
	scanf("%d",&node->info);
	node->next=NULL;
	i++;
	printf("\nDo you want more Y/N");
	fflush(stdin);
	ch=getchar();
	while(ch!='n' || ch!='N'){
		node->next=malloc(sizeof(struct link));
		node=node->next;
		printf("\nEnter the node %d ",i);
		scanf("%d",&node->info);
		node->next=NULL;
		i++;
		printf("\nDo you want more Y/N ");
		fflush(stdin);
		ch=getchar();
	}
}
void merge(struct link *n1,struct link *n2,struct link *n3)
{
	n3->info=n1->info;
	n3->next=NULL;
	n1=n1->next;
	while(n1!=NULL)
		{
			n3->next=malloc(sizeof(struct link));
			n3=n3->next;
			n3->info=n1->info;
			n1=n1->next;
			n3->next=NULL;
		}
	while(n1!=NULL)
		{
			n3->next=malloc(sizeof(struct link));
			n3=n3->next;
			n3->info=n2->info;
			n2=n2->next;
		}
}
void display(struct link *n)
{
	while(n!=NULL)
	{
		printf("  %d",n->info);
		n=n->info;
	}
	printf("\n");
}
