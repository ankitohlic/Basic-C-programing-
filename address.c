#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char *c;
	c=(char *)malloc(40*sizeof(char));
	strcpy(c,"Hello ANKIT\n"); // replace
	printf("\nAddress of c is : %u \n",c);
	puts(c);
	c=(char *)realloc(c,2*40*sizeof(char));
	strcat(c," how are you "); // add
	printf("\nnew address of c is %u\n ",c);
	puts(c);
}  
