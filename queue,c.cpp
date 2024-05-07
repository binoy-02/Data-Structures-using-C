#include<stdio.h> 
#define N 5
int a[N],r=-1,f=-1;
void enqueue(int e)
{
	if(r+1==N)
	{
		printf("queue is full\n");
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

void peek()
{
	if(r==-1)
	{
		printf("Empty\n");	
	}
	else
	{
		printf("peek %d\n", a[r]);
	}
}
void dequeue()
{   
	int i;
	if(r==-1)
	{
		printf("the queue is empty\n");
	}
	else
	{
		printf("deleted element is %d\n",a[f]);
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
		
			for(i=0;i<r;i++)
			{
				a[i]=a[i+1];
			}
		r--;
		}
	}
}
int main()
{
	enqueue(5);
	peek();
	enqueue(7);
	peek();
	dequeue();
	peek();
	dequeue();
	peek();
	dequeue();
	peek();
	return 0;
}
	

