#include<stdio.h>
int main()
{
	int a,b=5,c=8;
	{
		int b=2;
		printf("%d%d%d\t",a,b,c);
	}
	printf("%d%d%d\t",a,b,c);
	return 0;
}
