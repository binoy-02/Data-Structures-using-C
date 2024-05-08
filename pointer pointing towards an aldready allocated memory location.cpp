#include<stdio.h>
int main()
{
	int a;
	int*p;
	a=20;
	p=&a;
	printf("%d\n",&p);
	*p=40;
	printf("%d",a);
	return 0;
}
