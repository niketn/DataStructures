#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct node
{
   int data;
   struct node *prev,*next;
}*head,*first,*temp;
void append()
{
	head=(struct node*)malloc(sizeof(struct node));
	printf("\n enter value at end");
	scanf("%d",&head->data);
	head->prev=NULL;
	head->next=NULL;
	if(first==NULL)
	{
		first=temp=head;
	}
	else
	{
		temp=first;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=head;
		head->prev=temp;
		temp=head;
	}
}
void addatbeg()
{
	head=(struct node*)malloc(sizeof(struct node));
	printf("\n enter value at begining");
	scanf("%d",&head->data);
	head->prev=NULL;
	head->next=NULL;
	if(first==NULL)
	{
		first=temp=head;
	}
	else
	{
		head->next=first;
		first->prev=head;
		first=head;
	}
}
void display()
{
	temp=first;
	printf("\n The elements in the list are:");
	while(temp!=NULL)
	{
		printf("\t %d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int c;
	printf("\n      DOUBLY LINK LIST  ");
	do
	{
	   printf("\n 1.add at end");
       printf("\n 2.add at beg");
       printf("\n 3.dispaly");
       printf("\n 4.exit");
       scanf("%d",&c);
       switch(c)
       {
       	   case 1:
       	   append();
       	   break;
       	   case 2:
       	   addatbeg();
       	   break;
       	   case 3:
       	   display();
       	   break;
       	   case 4:
       	   exit(0);
       	   break;
       	   default:
       	   printf("\t INVALID OPTION!!");
       }
	}
    while(c!=4);
}