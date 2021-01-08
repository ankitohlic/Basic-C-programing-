#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,i=0,sum=0;
	p=(int *)malloc(10*sizeof(int));
	printf("ENTER 10 ELEMENT : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",(p+i));
	}
	for(i=0;i<10;i++)
	{
		sum+=*(p+i);
	}
	printf("Sum of all numeber is : %d",sum);
}
