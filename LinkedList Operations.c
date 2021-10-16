
#include<stdio.h>
#include<stdlib.h>
void split();
void reverse();
void concatenate();
void serch(int);
void delet(int);
struct node
{
	int data;
	struct node *ptr;
}*head=NULL,*first1=NULL,*temp,*first2=NULL,*temp1;
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
void addat_beg()
{
	int m;
	printf("\n enter your data ");
	scanf("%d",&m);
	head=(struct node*)malloc(sizeof(struct node));
	head->data=m;
	temp=first1;
	first1=head;
	first1->ptr=temp;
}
void addin_bet()
{
	int loc,i=1,no;
	struct node *r,*prev;
	printf("\n enter the location:");
	scanf("%d",&loc);
	printf("\n enter your data ");
	scanf("%d",&no);
	head=(struct node*)malloc(sizeof(struct node));
	head->data=no;
	temp=first1;
	while(temp!=NULL)
	{
		if(loc==i)
		{
			if(temp==first1)
			{
			   r=head;
			   r->data=no;
			   r->ptr=temp;
			   first1=r;	
			
			}
			else
			{
				r=head;
				r->data=no;
			    r->ptr=temp;
			    prev->ptr=r;
			}
		}
		else
		prev=temp;
		temp=temp->ptr;
		i++;
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
void addat_beg2()
{
	int m;
	printf("\n enter your data ");
	scanf("%d",&m);
	head=(struct node*)malloc(sizeof(struct node));
	head->data=m;
	temp=first2;
	first2=head;
	first2->ptr=temp;
}
void addin_bet2()
{
	int loc,i=1,no;
	struct node *r,*prev;
	printf("\n enter the location:");
	scanf("%d",&loc);
	printf("\n enter your data ");
	scanf("%d",&no);
	head=(struct node*)malloc(sizeof(struct node));
	head->data=no;
	temp=first2;
	while(temp!=NULL)
	{
		if(loc==i)
		{
			if(temp==first2)
			{
			   r=head;
			   r->data=no;
			   r->ptr=temp;
			   first2=r;				
			}
			else
			{
				r=head;
				r->data=no;
			    r->ptr=temp;
			    prev->ptr=r;
			}
		}
		else
		prev=temp;
		temp=temp->ptr;
		i++;
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
 void serch(int s)
{
	int i=1,k=0;
	temp=first1;
	while(temp!=NULL)
	{
		if(temp->data==s)
		{
				k++;
		       printf("\t element found at %d",i);
		}
		temp=temp->ptr;
		i++;		
	}
	if(k==0)
	   {
		  printf("\t element not found");
	   }
	
}
void delet(int d)
{
	temp=first1;int w=0;
	while(temp!=NULL)
	{
		if(temp->data==d)
		{
			w++;
		   first1->ptr=temp->ptr;
		   printf("\n element deleted is %d:",d);	
		}
		temp=temp->ptr;
	}
	if(w==0)
	   {
		  printf("\t element not found");
	   }
}
void concatenate()
{
    temp=first1;
    while(temp->ptr!=NULL)
    {
	    temp=temp->ptr;
    }
	temp->ptr=first2;
    first2=first1;
}
void split()
{
	int pos,i;
    printf("\n to split LL1 \nenter position to be split at:");
    scanf("%d",&pos);
    temp=first1;
    for(i=0;i<pos-1;i++)
    {
	  if(temp!=NULL)
	  {
		temp=temp->ptr;
	  }
	  else
	  {
		printf("insufficient nodes in LL1 to split at position %d ",pos);return;
	  }
   }
  temp1=first1;
  printf("First half = ");
  while(temp1!=temp)
  {
	printf("%d ",temp1->data);
	temp1=temp1->ptr;
  }
  printf("%d ",temp1->data);
  printf("\nSecond half = ");
  temp1=temp1->ptr;
  while(temp1!=NULL)
  {
	printf("%d",temp1->data);
	temp1=temp1->ptr;
  }
}
void reverse()
{
	int i=0,j;
	struct node *last;
	temp=first1;
	while(temp->ptr!=NULL)
	temp=temp->ptr;
	last=temp;
	head=last;
	while(first1!=last)
	{
		temp=first1;
		while(temp->ptr!=last)
		temp=temp->ptr;
		last->ptr=temp;
		last=temp;		
	}
	first1->ptr=NULL;
	first1=head;
	printf("\n");
	display();	
}
int main()
{
	int c,i,j=0,x,m,ss,ser,del;
	char z;
	while(1)
	{
		printf("\n 1.ENTER DATA IN 1st linkedlist");
		printf("\n 2.ENTER DATA IN 2nd linkedlist");
		printf("\n 3.DISPLAY CRITERIA");
		printf("\n 4.concatenate");
	    printf("\n 5.search");
	    printf("\n 6.reverse");
	    printf("\n 7.delete");
	    printf("\n 8.split");
	    printf("\n enter your choice ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			printf("\n1.enter at end  ");
            printf("\n2.enter at beg  ");
	        printf("\n3.enter in bet  ");
            scanf("%d",&ss);
	        switch(ss)
	        {
	      	  case 1:
	      	  create();
              break;
		      case 2:
		      addat_beg();
		      break;
		      case 3:
		      addin_bet();
		      break;
		      default:
		      printf("\t INVALID OPTION \n");
		      break;
	        }
	        break;
			case 2:
			printf("\n1.enter at end  ");
            printf("\n2.enter at beg  ");
	        printf("\n3.enter in bet  ");
            scanf("%d",&ss);
	        switch(ss)
	        {
	      	  case 1:
	      	  create2();
              break;
		      case 2:
		      addat_beg2();
		      break;
		      case 3:
		      addin_bet2();
		      break;
		      default:
		      printf("\t INVALID OPTION \n");
		      break;
	        }
			break;
			case 3:
			printf("\n choose approprite option...");
			printf("\n a.DISPLAY CONTENTS OF 1st linkedlist");
			printf("\n b.DISPLAY CONTENTS OF 2nd linkedlist\n");
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
			concatenate();
            display();
	        break;
	        case 5:
	        printf("\n enter the element to be searched in first list: ");
		    scanf("%d",&ser);
		    serch(ser);
		    break;
		    case 6:
		    reverse();
		    break;
		    case 7:
		    printf("\n enter the element to be deleted from first list: ");
		    scanf("%d",&del);
		    delet(del);
		    break;
		    case 8:
		    split();
		    break;
		    default:
            printf("\t INVALID OPTION \n ");
            break;
		}
	}
}

Output:
 

 

 

 

 

 










