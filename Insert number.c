//006_ankit poddar q2
//insert a number anywhere b/w an array
#include <stdio.h>
int position, c, n=0, value;
void  insert();
void del();
int array[100];
int main()
{
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
	
    printf("Enter %d elements\n", n);
 
    for (c = 0; c < n; c++)
    {scanf("%d", &array[c]);}
 	//inserting element
	int ch;
	do{
	 	printf("\nENTER 1 FOR INSERTING ELEMENT \nENTER 2 FOR DELETING ELEMENT \nENTER 0 FOR EXIT : ");
	 	scanf("%d",&ch);
	 	//choice
	 	if(ch==1)
	 	insert(array);
	 	if(ch==2)
	 	del(array);
	 	
	}while(ch!=0);
   return 0;
}
//insert
void insert(int arr[n])
{
	printf("CURRENT ARRAY AVAILABLE : ");
	for (c = 0; c <n; c++)
      printf("%d  ", arr[c]);
      
	  printf("\nEnter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      arr[c+1] = arr[c];
 
   arr[position-1] = value;
   
   
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", arr[c]);
      n++;
}
//delete
void del(int arr[n])
{
	printf("CURRENT ARRAY AVAILABLE : ");
	for (c = 0; c < n; c++)
      printf("%d  ", arr[c]);
      
   printf("\nEnter the location where you wish to delete an element\n");
   scanf("%d", &position);
 
   for (c = position-1; c < n; c++)
      arr[c] = arr[c+1];
      
       printf("Resultant array is\n");
   for (c = 0; c < n-1; c++)
      printf("%d\n", arr[c]);
 
 n--;
}
