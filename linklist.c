#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *link;
}*p=NULL,*temp=NULL,*r=NULL;
 void addatbeg()
{    
    int I;
   	p=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	temp=p;	
	printf("\n Enter element in linklist");
	scanf("%d",&I);
	temp->data=I;
	temp->link=p;
	p=temp;
}
/*void admiddle()
{
    node * temp;
	temp=new node;int s;
	printf("\n Enter the element after which you want to insert:");
	scanf("%d",&s);
	temp=p;
	for(i=0;i<t;i++)
	{
	   if(s==temp->data)
	   {
   		  printf("\n enter the value:");
   		  scanf("%d",&new node->data);
   		  new node->link=temp->link;
   		  temp->link=new node;
   	   }
       else
	   {
   		 temp=temp->link;
   	   }	
	}	
}*/
 void append()
{
    int i,t=0;
    p=(struct node*)malloc(sizeof(struct node));
   printf("\n Enter the elements of linklist  :");
   scanf("%d",&p->data);
   if(p==NULL)
   {
   	 temp=r=p;
     /*p=temp;
     p->data=i;
     p->link=NULL;*/
   }
   else
   {
   	  temp->link=p;
   	  temp=p;
     /*temp=p;
     while(temp->link!=NULL)
     {
         temp=temp->link;
      }
      r=p;
      r->data=i;
      r->link=NULL;
      temp->link=r;*/
      t++;
   }
 }
void display()
{ 	 
  struct node *temp;
  temp=p;
  printf("The containt of the linklist\n");
  while (temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->link;
  }
} 
int main()
{
   int choice;
   char x,k,t;
 while(1)
 {
     printf("\n Enter your choice from below");
     printf("\n 1. Insert");
     printf("\n 2. Display");
     printf("\n 3. Exit");
     scanf("%d",&choice);
     switch (choice)
     {
        case 1:
        printf("choose option \n a.Append  \n b.Begining \n c.Middle \n");
        fflush(stdin);
        scanf("%c",&k);
        if(k=='a')
        {
        	append();
        }
        if(k=='b')
        {
        	addatbeg();
        }
        /*if(k=='c')
        {
        	admiddle();
        }*/
        break;
        case 2:
        display();
        break;
        case 3:
        exit(0);
     }
   }
 }
