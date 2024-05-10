#include<stdio.h>
int main()
{
	int a,b,*t;
	a=10;
	b=5;
	t=&a;
	a=30;
	printf("%d%d\t",a,*t);
	a=b;
	printf("%d%d%d\t",a,b,*t);
	return 0;	
}
