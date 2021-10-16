#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*front=NULL,*rear=NULL,*temp,*head;
void appendq()
{
   int w;	
   head=(struct node*)malloc(sizeof(struct node));
   printf("\n enter the element in que:\t");
   scanf("%d",&head->data);
   if(front==NULL)
   {
   	 rear=front=temp=head;
   }
   else
   {
   	rear->link=head;
   	rear=head;
   	rear->link=NULL;	
   }
  w++;
}
int deleq()
{
	int d,w;
	if(front==NULL)
	{
		printf("\n que empty");
	}
	else if(front==rear)
	{
	     d=front->data;
		 front=rear=NULL;
		 return d;
		 w--;
		 free(front);	
	}
	else
	{
		d=front->data;
		temp=front;
		front=front->link;
		rear->link=front;
		return d;
		w--;
		free(temp);
	}
}
void dispaly()
{
	temp=front;
	if((temp==NULL)&&(rear==NULL))
	{
		printf("\n que is empty");
	}
	printf("\n the contents of queue is:");
	while(temp!=rear)
	{	    
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	if(temp==rear)
	{
		printf("%d\t",temp->data);
	}
}
int main()
{
	int c,rd,w=0;
	while(1)
	{
		printf("\n 1.enter data");
	    printf("\n 2.display");
	    printf("\n 3.delete element");
	    scanf("%d",&c);
	    switch(c)
	   {
		  case 1:appendq();break;
		  case 2:dispaly();break;
		  case 3:
		  rd=deleq();
		  printf("\n the deleted element of que is: \t %d",rd);
		  break;
	   }
	}
	
}