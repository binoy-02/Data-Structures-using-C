#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	printf("enter a number");
	scanf("%d",p);
	printf("the value at p is %d",*p);
	return 0;
}
