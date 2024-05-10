#include<stdio.h> 
#define N 5
int a[N],r=-1,f=-1;
void enqueue(int e)
{
	if(r+1==N)
	{
		printf("queue is full");
	}
	else
	{
		if(f==-1)
		{
			f++;
		}
	    a[++r]=e;
	}
}
void dequeue()
{
	if(r==-1)
	{
		printf("the queue is empty");
	}
	else
	{
		printf("deleted element is %d",a[f++]);
	}
}
int main()
{
	enqueue(5);
	enqueue(7);
	dequeue();
	dequeue();
	dequeue();
	return 0;
}
	

