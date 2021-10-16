#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head=NULL,*f1=NULL,*temp,*temp1,*f2=NULL,*t=NULL,*tm;
int merge()
{
	temp=f1,temp1=f2;
	head=(struct node*)malloc(sizeof(struct node)); 
	while(temp!=NULL)
	{
		if(temp->link==NULL)
		{
		   
			temp->link=temp1; printf("\n khaje karta!!");	        
		}
		t=temp;
	    temp=temp->link;
	}
	
	return 0;
}
/*void mergensort()
{
	temp=f1,temp1=f2;
	head=(struct node*)malloc(sizeof(struct node)); 
	while(temp!=NULL && temp1!=0)
	{
		/*if(temp->data < temp1->data)
		{
			if(t==NULL)
		    {
               t=head;
   	           t->data=temp->data;
               t->link=NULL;
		    }
		    else
		    {
			   tm=t;
			   while(tm->link!=NULL)
		 	  {
				 tm=tm->link;
			  }
			  head->data=temp->data;
			  head->link=NULL;
		 	  tm->link=head;
		    }
		
		else
		{
			if(t==NULL)
		    {
               t=head;
   	           t->data=temp1->data;
               t->link=NULL;
		    }
		    else
		    {
			   tm=t;
			   while(tm->link!=NULL)
		 	  {
				 tm=tm->link;
			  }
			  head->data=temp1->data;
			  head->link=NULL;
		 	  tm->link=head;
		    }
			
		temp=temp->link;
	}
}*/
void dmns()
 {
   tm=t;
   printf("\n The contents of the linklist are ");
   while (tm!=NULL)
   {
      printf("%d \t",tm->data);
      tm=tm->link;
   }
 }
void create()
{
	int d;
	head=(struct node*)malloc(sizeof(struct node)); 
	printf("\n enter value at the end   ");
	scanf("%d",&d);
    if(f1==NULL)
    {
      f1=head;
      f1->data=d;
      f1->link=NULL;
    }
    else
   {
     temp=f1;
     while(temp->link!=NULL)
     {
        temp=temp->link;
     }
     head->data=d;
     head->link=NULL;
     temp->link=head;
   }
}
void create2()
{
	int d;
	head=(struct node*)malloc(sizeof(struct node)); 
	printf("\n enter value at the end   ");
	scanf("%d",&d);
    if(f2==NULL)
    {
      f2=head;
      f2->data=d;
      f2->link=NULL;
    }
    else
   {
     temp=f2;
     while(temp->link!=NULL)
     {
        temp=temp->link;
     }
     head->data=d;
     head->link=NULL;
     temp->link=head;
   }
}
 void display()
 {
   temp=f1;
   printf("\n The contents of the linklist are ");
   while (temp!=NULL)
   {
      printf("%d \t",temp->data);
      temp=temp->link;
   }
 }
  void display2()
 {
   temp=f2;
   printf("\n The contents of the linklist are: ");
   while (temp!=NULL)
   {
      printf("%d \t",temp->data);
      temp=temp->link;
   }
 }
int main()
{
	int c;
	char z;
	while(1)
	{
		printf("\n 1.ENTER DATA IN 1st LINKLIST");
		printf("\n 2.ENTER DATA IN 2nd LINKLIST");
		printf("\n 3.MERGE AND SORT");
		printf("\n 4.DISPLAY CRITERIA\n");
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
            merge();
            dmns();
			break;
			case 4:
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
		}
	}
}