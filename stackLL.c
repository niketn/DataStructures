#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
   int data;
   struct node *link;
}*top=NULL,*head,*temp;
void push()
{
	int i;
   head=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter the elements of linklist");
   scanf("%d",&i);
   if(head==NULL)
   {
      printf("\n stack overflow");
   }
   else
   {
      head->data=i;
      head->link=top;
      top=head;
   }
}
void pop()
{
	struct node *t;
	if(top==NULL)
	{
		printf("\n stack is underflow");
	}
	else
	{
	    t=top;
		top=top->link;
		printf("\n the popped element is: %d\t",t->data);	
	}
}
void show()
{
	struct node *t;
	t=top;
	while(t!=NULL)
	{
		printf("\n the contents of stack are:");
		printf("%d\t",t->data);
		t=t->link;
	}
}
 int main()
{
   int choice;
   char x;
   do
   {
      printf("\n Enter your choice from below");
      printf("\n1. push");
      printf("\n2. pop");
      printf("\n3. display");
      printf("\n4. exit\t");
      scanf("%d",&choice);
      switch (choice)
      {
      	case 1:push();break;
      	case 2:pop();break;
      	case 3:show();break;
      	case 4:exit(0);break;
      }
   }while(choice<4||choice>0);
}