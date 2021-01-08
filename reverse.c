//1929006_ankit poddar
#include<stdio.h>
#include<stdlib.h>
//using namespace std;
struct node {
	int data;
	struct node *link;
};
struct node *start=NULL;
int c; // counter
void append()
{
	struct node *temp; //creating new node 
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\nENTER DATA : ");
	scanf("%d",&(temp->data));
	temp->link=NULL;
	if(start==NULL) //checking weather new node is 1st node or not
	{
		start=temp;
	}
	else{ //more then 1 node
		struct node *p;  //creating a temp node 
		p=start;
		while(p->link!=NULL)  // finding last node
		{
			p=p->link;
		}
		p->link=temp; //linking node with last node
	}
}
void reverse() // funtion for reverse 
{
	struct node *p,*q; // p= starting node ; q = ending node
	p=q=start;
	int i=0,temp;
	int j=c-1;
	while(i<j)   // 1st and last node will swap data 
	{
		int k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;j--;
		p=p->link;
		q=start;
	}
}
void main()
{
	char ch='1';
	while(ch=='1')
	{
		append();	
		printf("WANT TO ENTER DATA ? /nEnter 1 for yes /nEnter any key to exit : ");
		scanf("%s",&ch);
		c++; //counter
	}
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("  %d",temp->data);
		temp=temp->link;
	}
	
	reverse();
	
	printf("\nREVERSE : \n");
	temp=start;
	while(temp!=NULL)
	{
		printf("  %d",temp->data);
		temp=temp->link;
	}
	
}
