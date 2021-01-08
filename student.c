#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[20];
	int roll;
	float per;
};
int main()
{
	int n,i;
	struct student *p;
	printf("ENTER THE NUMBERS OF STUDENT : ");
	scanf("%d",&n);
	p=(struct student *)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("ENTER NAME : ");
		scanf("%s",(p+i)->name);
		printf("ENTER ROLL : ");
		scanf("%d",&(p+i)->roll);
		printf("ENTER PERCENTAGE : ");
		scanf("%f",&(p+i)->per);
	}
	for(i=0;i<n;i++)
	{
		printf("\nNAME : %s",(p+i)->name);
		printf("\nROLL : %d",(p+i)->roll);
		printf("\nPERCENTAGE : %f",(p+i)->per);
	}
}
