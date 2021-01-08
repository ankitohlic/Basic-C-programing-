//006_ankit poddar
// multiply matrix
#include<stdio.h>
int r1,r2,c1,c2;
int i,j;
void add();
void mult();
int main()
{
	printf("ENTER THE ROW AND COLOUM OF 1ST ARRAY : ");
	scanf("%d %d",&r1,&c1);
	printf("\nENTER THE ROW AND COLOUM OF 2ND ARRAY : ");
	scanf("%d %d",&r2,&c2);
	
	int a[r1][c1],b[r2][c2];
	
	printf("ENTER THE ELEMENT IN 1ST MARTIX ");
		
	//insering matrixs 1
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nEnter in position %d%d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	 printf("/nENTER THE ELEMENT IN 2ND MARTIX ");
	 //insering matrixs 2
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nEnter in position %d%d ",i,j);	
			scanf(" %d",&b[i][j]);
		}
	}
	
	//choosing 
	int ch;
		printf("ENTER 1 FOR ADDITION \nENTER 2 FOR MULTIPLICATION \nENTER 0 FOR EXIT:");
		scanf("%d",&ch);
		if(ch==1)
		add(a,b);
		if(ch==2)
		mult(a,b);
}

void add(int a[r1][c1],int b[r2][c2])
{
	if(r1==r2 && c1==c2)
	{
		for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		int ad=a[i][j]+b[i][j];
	    		printf("    %d",ad);
			}
			printf("\n");
		}
	}
	else
	{
		printf("ADDITION CANNOT BE DONE AS ROW AND COLOM ARE DIFF ");
			int ch;
		printf("ENTER 2 FOR MULTIPLICATION \nENTER 0 FOR EXIT:");
		scanf("%d",&ch);
		if(ch==2)
		mult(a,b);
	}
}

void mult(int a[r1][c1],int b[r2][c2])
{
	if(r1==c2 && r2==c1)
	{
		int mul[r1][r1];
		//multiply
		int k;
		for(i=0;i<r1;i++)
		{
	        for(j=0;j<c2;j++)
	        {
	        	mul[i][j]=0;
	            for(k=0;k<c1;k++)
	            {
	                mul[i][j] += a[i][k]*b[k][j];
	            }
	        }
	    }
	    
	    //display
	    for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		printf("%d\t",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("MULTIPLICATION CANNOT BE DONE");
		int ch;
		printf("\nENTER 1 FOR ADDITION \nENTER 0 FOR EXIT:");
		scanf("%d",&ch);
		if(ch==1)
		add(a,b);
	}
}
