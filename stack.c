#include<stdio.h>
#include<stdlib.h>
#define max 5
int main()
{
	int c,top=-1,n,i,a[10],k,temp;
	while(1)
	{
		printf("\n 1.Push");
		printf("\n 2.Pop");
		printf("\n 3.Display");
		printf("\n enter your option:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			printf("\n enter the no of entries:");
			scanf("%d",&n);			
			for(i=0;i<n;i++)
			{    
			    if(top==9)
   {
   	 printf("\n stack overflow");
   	 exit(0);
   }
   else
   {
   	top++;
   	s[top]=t;
   }			  
			}
			break;
			case 2:
			
			break;
			case 3:
			for(i=0;i<n;i++)
			{
				temp=top;
				if(temp!=-1)
				{
					printf("the content of stack is:");
					while(temp!=-1)
					{
						printf("%d",a[i]);
						temp--;
					}
				}
			}
			break;
		}
	}
}