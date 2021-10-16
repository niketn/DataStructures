#include<stdio.h>
#define max 5
void insertq(int);
int deleq();
int a[max];
int rear=-1;
int front=-1;
int main()
{
	int n,c,i,w;
	printf("\n    OUEUE Using array");
	printf("\n   ====================");
	while(1)
	{
		printf("\n   1.INSERT");
	    printf("\n   2.DELETE");
	    printf("\n   3.DISPLAY");
     	printf("\n   4.exit");
     	printf("\n   enter your choice:  ");
	    scanf("%d",&c);
	   switch(c)
	  {
		 case 1:
		  printf("        Enter the element in que:  ");
		  scanf("%d",&n);
		  insertq(n);
		  break;
		  case 2:
	      printf("\n  THE DELETED ELEMENT FROM QUEUE IS:");
	      w=deleq();
	      printf("%d  \t ",w);
	      break;
		  case 3:
		  printf("\n THE contents of the queue is:");
		for(i=front;i<rear+1;i++)
		{
			printf("%d\n",a[i]);
		}
		break;
	  }
	}
  return 0;	
}
void insertq(int t)
{
	if(rear==max-1)
	{
		printf("\n Queue full");
	}
	else
	{
		rear++;
		a[rear]=t;
	}
	if(front==-1)
	{
		front=rear;
	}
}
int deleq()
{
	if(front==-1)
	{
		printf("\n que is empty");
	}
	else
	{
		int m=a[front];
		front++;
		return m;
	}
	if(front==rear)
	{
		front=rear=-1;
	}
}
