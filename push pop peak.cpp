#include<stdio.h>
int main()
{
	int a[5];
	int top=-1,choice;
	while(choice!=4)
	{
		printf("push-1\npop-2\npeek-3\nexit-4\n enter user choice");
		scanf("%d",&choice);
		switch(choice)
		{
	case 1: //push
		if (top+1==5)
		{
			printf("the array is full");
		}
		else
		{
			printf("enter the value to be pushed");
		    scanf("%d",&a[++top]);
		}
		break;
	case 2: //pop
		if(top==-1)
		{
			printf("teh array is empty");
		}
		else
		{
			printf("\n pop %d",a[top--]);
		}
		break;
	case 3: //peak
	    if(top==-1)
		{
			printf("\nenter the array is full");
		}
		else
		{
			printf("\n peak %d",a[top]);
		}
		break;
	case 4:
		break;
		default:
		printf("wrong choice");
		break;
		}
	}
	return 0;
}
