#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
   int data;
   struct node *link;
}*first=NULL,*head=NULL,*temp,*r,*prev;
void addatbeg()
{
	head=(struct node*)malloc(sizeof(struct node));
    temp=head;
	int I;
	printf("\nEnter element in linklist");
	scanf("%d",&I);
	temp->data=I;
	temp->link=first;
	first=temp;
}
void addmed()
{
 int num,loc,i=1;
 head=(struct node*)malloc(sizeof(struct node));
 printf("\nEnter the location to insert a node ");
 scanf("%d",&loc);
 printf("\n Enter the element to be insert");
 scanf("%d",&num);
 temp=first;
    while(temp!=NULL)
    {
	if(loc==i)
	{
	   if(temp==first)
	   {
	    r=head;
	    r->data=num;
	    r->link=temp;
	    first=r;
	    return;
	   }
	   else
	   {
	    r=head;
	    r->data=num;
	    r->link=temp;
	    prev->link=r;
	    return;
	   }
        }
	else
	{
	 prev=temp;
	 temp=temp->link;
	 i++;
	}
  }
   printf("\n NUmber is Not Found");
}
void append()
 {
   int i;
   head=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter the elements of linklist");
   scanf("%d",&i);
   if(first==NULL)
   {
      first=head;
      first->data=i;
      first->link=NULL;
   }
   else
   {
     temp=first;
     while(temp->link!=NULL)
     {
        temp=temp->link;
     }
     r=head;
     r->data=i;
     r->link=first;
     temp->link=r;
   }
}
 void display()
 {
   temp=first;
   printf("\n The containt of the linklist ");
   while (temp!=NULL)
   {
      printf("%d \t",temp->data);
      temp=temp->link;
   }
 }
 int main()
{
   int choice;
   char x;
   do
   {
      printf("\n Enter your choice from below");
      printf("\n1. Insert at end");
      printf("\n2. insert in between");
      printf("\n3. insert at beg");
      printf("\n4. display");
      scanf("%d",&choice);
      switch (choice)
      {
          case 1:
          append();
          break;
          case 2:
          addmed();
          break;
          case 3:
          addatbeg();
          break;
          case 4:
          display();
          break;
      }
    }while(choice<4||choice>0);
}
