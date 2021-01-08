//This is queue program from linked list 
#include<stdio.h>
#define MAX 10
#include<stdlib.h>
struct queue{
	int data;
	struct queue *link;
	int front;
	int real;
}*start;
void insert(struct queue *,int);
void del(struct queue *);
int empty(struct queue *);
int full(struct queue *);
void create(struct queue *);
void display(struct queue *);
void main()
{
	struct queue *q;
	q=(struct queue *)malloc(sizeof(struct queue));
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
void create(struct queue *q)
{
	q->front=0;
	q->real=-1;
    start=NULL; 
	printf("\nQUEUE CREATED SUCESSFFULLY ! ");
}
void insert(struct queue *q,int x)
{
	struct queue *temp;
	temp=(struct queue *)malloc(sizeof(struct queue));
	if(q->front!=0 || q->front<0)
	{
		printf("\nYou have not created pueue ! \nDont worry it will create automatic \n");
		create(q);
	}
	else
	{
		if(full(q))
		{
			printf("\nQUEUE IS OVERFLOW !");
		}
		else
		{
			q->real++;
			temp->data=x;
			temp->link=NULL;
			if(start==NULL) //if there is no queue present it will creat new one
			{
				start=temp;
			}
			else
			{
				struct queue *p;  //creating a temp queue 
				p=start;
				while(p->link!=NULL)  // finding last queue
				{
					p=p->link;
				}
				p->link=temp; //linking queue with last queue
			}
		}
    }
}
void del(struct queue *q)
{
	if(empty(q))
	{
		printf("\nQUEUE IS UNDERFLOW !");
	}
	else
	{
		struct queue *temp;
		temp=start;
		start=start->link;
		free(temp);
		q->front++;
	}
}
void display(struct queue *q)
{
	struct queue *temp; //creating new queue 
	temp=start;
	printf("\n queueS DATA ARE AS FOLLOWS : ");
	while(temp!=NULL) //running will last queue with contain null
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
int empty(struct queue *q)
{
	if(q->front>q->real)
		return 1;
	else
		return 0;
}
int full(struct queue *q)
{
	if(q->real==MAX-1)
	{return 1;}
	else
	{
	return 0;}
}

