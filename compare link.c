#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *ptr;
}*head=NULL,*first1=NULL,*temp,*temp1,*first2=NULL;
void create()
{
	int d;
	head=(struct node*)malloc(sizeof(struct node)); 
	printf("\n enter value at the end   ");
	scanf("%d",&d);
    if(first1==NULL)
    {
      first1=head;
      first1->data=d;
      first1->ptr=NULL;
    }
    else
   {
     temp=first1;
     while(temp->ptr!=NULL)
     {
        temp=temp->ptr;
     }
     head->data=d;
     head->ptr=NULL;
     temp->ptr=head;
   }
}
void create2()
{
	int d;
	head=(struct node*)malloc(sizeof(struct node)); 
	printf("\n enter value at the end   ");
	scanf("%d",&d);
    if(first2==NULL)
    {
      first2=head;
      first2->data=d;
      first2->ptr=NULL;
    }
    else
   {
     temp=first2;
     while(temp->ptr!=NULL)
     {
        temp=temp->ptr;
     }
     head->data=d;
     head->ptr=NULL;
     temp->ptr=head;
   }
}
 void display()
 {
   temp=first1;
   printf("\n The contents of the 1st linkedlist are ");
   while (temp!=NULL)
   {
      printf("%d \t",temp->data);
      temp=temp->ptr;
   }
 }
  void display2()
 {
   temp=first2;
   printf("\n The contents of the 2nd linkedlist are: ");
   while (temp!=NULL)
   {
      printf("%d \t",temp->data);
      temp=temp->ptr;
   }
 }
int main()
{
	int c,i,j=0,x,m;
	char z;
	while(1)
	{
		printf("\n 1.ENTER DATA IN 1st linklist");
		printf("\n 2.ENTER DATA IN 2nd linklist");
		printf("\n 3.DISPLAY CRITERIA");
		printf("\n 4.COMPARE:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			create();
			break;
			case 2:
			create2();
			break;
			case 3:
			printf("\n choose approprite option...");
			printf("\n a.DISPLAY CONTENTS OF 1st linklist");
			printf("\n b.DISPLAY CONTENTS OF 2nd linklist\n");
			scanf("%s",&z);
			if(z=='a')
			{
				display();
			}
			if(z=='b')
			{
				display2();
			}			
			break;
			case 4:
			temp=first1;temp1=first2;			
				while(temp!=NULL && temp1!=NULL)
				{
					if( temp->data != temp1->data )
    	            break;					
					temp=temp->ptr;
					temp1=temp1->ptr;
				}
				if( temp == NULL && temp1 == NULL)
	            printf("\n IDENTICAL");
	            else
                printf("\n NON IDENTICAL");
				
			break;
		}
	}
}