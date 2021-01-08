
#include<conio.h>
#include<stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void printArray(int array[], int size) {
  int i;
  for ( i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void selection(int array[], int size){
 int i,j;
  for (j= 0;j < size - 1; j++) {
    int min = j;
    for (i = j + 1; i < size; i++)
    {
	  if (array[i] < array[min])
	      min = i;
    }
       swap(&array[min], &array[j]);
       printArray(array,size);
  }
}

void insertion(int array[], int size) {
int i,j;
  for ( i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
    printArray(array,size);
  }
}
void bubble(int array[], int size) {
	 int i,j;
    for (j = 0; j < size - 1; ++j) {
    for ( i = 0; i < size - j - 1; ++i)
    {
      if (array[i] > array[i + 1])
      {	int temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
      }
      printArray(array,size);
    }
  }
}
int main()
{
 int a[20],ch,num=1,size=10,i;
 while(num)
 { 
 printf("\n enter the size of the array");
 scanf("%d",&size);
 printf("\n enter the elements of teh arraay");
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 printf("\n enter the desired choice \n 1.Bubble sorting \n.2.selection sorting \n 3. insertion sort");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  bubble(a,size);
  break;
  case 2:
  selection(a,size);
  break;
  case 3:
  insertion(a,size);
  }
  printf("\n want to go to the main menu again");
  scanf("%d",&num);
  }
  return 0;
}
