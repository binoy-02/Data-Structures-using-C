#include<stdio.h>
int main()
{
	int a=3,b;
	{
		int a=5;
		printf("%d%d\n",a,b);
		b=3;
	}
	printf("%d%d\n",a,b);
	return 0;
	
}
