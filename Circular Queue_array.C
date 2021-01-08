#include<stdio.h>
#include<conio.h>

#define max 100

void enqueue(int );
int dequeue();
void display();

int cqueue[max];
int rear=-1,front=-1,size=5;

void main()
{
  int n,ele;
  clrscr();
  while(1)
  {
    printf("\nchoose an option from below: ");
    printf("\n1. enqueue");
    printf("\n2. dequeue");
    printf("\n3.display");
    printf("\n4.quit:  ");
    scanf("%d",&n);
    switch(n)
    {
      case 1:
	printf("\nenter the element to be inserted: ");
	scanf("%d",&ele);
	enqueue(ele);
	break;
      case 2:
	ele=dequeue();
	printf("\ndeleted element is: %d",ele);
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
  if((size==rear+1&&front==0)||front==rear+1)
  {
    printf("\nqueue is full");
    return;
  }
  else if(front==-1&&rear==-1)
  {
    front=rear=0;
    cqueue[rear]=ele;
  }
  else if(rear==size-1)
  {
    rear=0;
    cqueue[rear]=ele;
  }
  else
  {
    cqueue[++rear]=ele;
  }
}

int dequeue()
{
  int ele;
  if(front==-1&&rear==-1)
  {
    printf("\nqueue is empty");
    return 0;
  }
  else if(front==rear)
  {
    ele=cqueue[front];
    front=rear=-1;
  }
  else if(front==size-1)
  {
     ele=cqueue[front];
     front=0;
  }
  else
  {
    ele=cqueue[front];
    front++;
  }
  return ele;
}

void display()
{
  int i;
  if(front==-1&&rear==-1)
  {
    printf("\nempty queue");
    return;
  }
  printf("\nelements of circular queue is/are: \n");
  for(i=front;i<=rear;i++)
    printf("%d\t",cqueue[i]);
}