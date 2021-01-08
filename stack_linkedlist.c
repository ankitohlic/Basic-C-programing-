//This is stack program from linked list 
#include<stdio.h>
#define MAX 10
#include<stdlib.h>
struct stack{
	int data;
	struct stack *link;
	int front;
	int real;
}*start;
void insert(struct stack *,int);
void del(struct stack *);
int empty(struct stack *);
int full(struct stack *);
void create(struct stack *);
void display(struct stack *);
void main()
{
	struct stack *q;
	q=(struct stack *)malloc(sizeof(struct stack));
	int ch;
	do{
		printf("\n\nCHOOSE AMONG THE FOLLOWING : \n 1.CREATE \n 2.INSERT \n 3.DELETE \n 4.DISPLAY \n 5.EXIT \n NOTE : If you will receate then you will loose previous data : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create(q);
					break;
				}
			case 2:
				{
					int x;
					printf("\nENTER THE DATA : ");
					scanf("%d",&x);
					insert(q,x);
					break;
				}
			case 3:
				{
					del(q);
					break;
				}
			case 4:
				{
					display(q);
					break;
				}
			case 5: 
			{
				display(q);
				printf("\nEXIT !!");
				break;
			}
			default :
				{
					printf("\nENTER VALID NUMBER ");
				}
		}
	}while(ch!=5);
	return;
}
void create(struct stack *q)
{
	q->front=0;
	q->real=-1;
    start=NULL; 
	printf("\nstack CREATED SUCESSFFULLY ! ");
}
void insert(struct stack *q,int x)
{
	struct stack *temp;
	temp=(struct stack *)malloc(sizeof(struct stack));
	temp->link=NULL;
	if(q->front!=0 || q->front<0)
	{
		printf("\nYou have not created pueue ! \nDont worry it will create automatic \n");
		create(q);
	}
	else
	{
		if(full(q))
		{
			printf("\nstack IS OVERFLOW !");
		}
		else
		{
			q->real++;
			temp->data=x;
			if(start==NULL) //if there is no stack present it will creat new one
			{
				start=temp;
			}
			else
			{
				temp->link=start;
				start=temp;
			}
		}
    }
}
void del(struct stack *q)
{
	if(empty(q))
	{
		printf("\nstack IS UNDERFLOW !");
	}
	else
	{
		struct stack *temp;
		temp=start;
		printf("\nDELETED ELEMENT : %d",temp->data);
		start=start->link;
		free(temp);
		q->real--;
	}
}
void display(struct stack *q)
{
	struct stack *temp; //creating new stack 
	temp=start;
	printf("\n stackS DATA ARE AS FOLLOWS : ");
	while(temp!=NULL) //running will last stack with contain null
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
int empty(struct stack *q)
{
	if(q->real<0)
		return 1;
	else
		return 0;
}
int full(struct stack *q)
{
	if(q->real==MAX-1)
	{return 1;}
	else
	{
	return 0;}
}

