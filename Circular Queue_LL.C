#include<stdio.h>
#include<conio.h>

void enqueue(int);
void dequeue();
void display();

struct queue{
 int data;
 struct queue *next;
}*front=NULL,*rear=NULL;

void main()
{
  int n,ele;
  clrscr();
  while(1)
  {
    printf("\nenter the option from below: ");
    printf("\n1.enqueue");
    printf("\n2.dequeue");
    printf("\n3.display");
    printf("\n4.quit:   ");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
	 printf("\nenter the element to be inserted: ");
	 scanf("%d",&ele);
	 enqueue(ele);
	 break;
      case 2:
	 dequeue();
	 break;
      case 3:
	 display();
	 break;
      case 4:
	 exit(1);
      default:
	 printf("\ninvalid selection");
    }
  }
  getch();
}

void enqueue(int ele)
{
  struct queue *temp;
  temp=(struct queue *)malloc(sizeof(struct queue));
  temp->data=ele;
  temp->next=NULL;
  if(rear==NULL&&front==NULL)
    {
      front=rear=temp;
      rear->next=front;
    }
  else
  {
    rear->next=temp;
    temp->next=front;
  }
}

void dequeue()
{
  struct queue *temp;
  if(front==NULL)
    {
      printf("\nqueue is empty");
      return 0;
    }
  else
  {
     temp=front;
     front=front->next;
     printf("deleted element is: %d",temp->data);
     free(temp);
     rear->next=front;
  }
}

void display()
{
  struct queue *temp;
  temp=front;
  if(front==NULL)
  {
    printf("\nqueue is empty");
    return;
  }
  printf("%d-->",temp->data);
  temp=temp->data;
  while(temp!=front)
     {
     printf("%d-->",temp->data);
     temp=temp->data;
     }
}