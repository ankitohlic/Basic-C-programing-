//This is queue program from array 
#include<stdio.h>
#define MAX 10
#include<stdlib.h>
typedef struct{
	int data[MAX];
	int front;
	int real;
}detail;
//detail *q;
void insert(detail *,int);
void del(detail *);
int empty(detail *);
int full(detail *);
void create(detail *);
void display(detail *);
void main()
{
	detail q;
	int ch;
	do{
		printf("\n\nCHOOSE AMONG THE FOLLOWING : \n 1.CREATE \n 2.INSERT \n 3.DELETE \n 4.diaplay \n 5.exit \n NOTE : If you will receate then you will loose previous data : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				{
					create(&q);
					break;
				}
			case 2:
				{
					int x;
					printf("\nENTER THE DATA : ");
					scanf("%d",&x);
					insert(&q,x);
					break;
				}
			case 3:
				{
					del(&q);
					break;
				}
			case 4:
				{
					display(&q);
					break;
				}
			case 5:
				{
					display(&q);
					printf("\nENIT !!!!");
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
void create(detail *q)
{
	q->front=0;
	q->real=-1;
	printf("\nQUEUE CREATED SUCESSFFULLY ! ");
}
void insert(detail *q,int x)
{
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
			q->data[q->real]=x;	
		}
    }
}
void del(detail *q)
{
	if(empty(q))
	{
		printf("\nQUEUE IS UNDERFLOW !");
	}
	else
	{
		printf("\nDeleted element : %d",q->data[q->front]);
		q->data[q->front]='\0';
		q->front++;
	}
}
void display(detail *q)
{
	int i;
	for(i=q->front;i<=q->real;i++)
	{
		printf("\n%d",q->data[i]);
	}
}
int empty(detail *q)
{
	if(q->front>q->real)
		return 1;
	else
		return 0;
}
int full(detail *q)
{
	if(q->real==MAX-1)
	{return 1;}
	else
	{
	return 0;}
}

