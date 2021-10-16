
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
 

 

 

 

 

 



Code :

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *l;
    struct node *r;
}*root = NULL, *temp = NULL,*t2, *t1,*w;
int ob=0,k=0,successor,predecessor,flag = 1;

void insert();
void delet();
void order(struct node *ptr);
void successorPredecessor(struct node *root, int val);
void search_element(struct node *ptr, int pos,int l);
void displayLevel_LtoR(struct node* root, int level); 
void display(struct node *ptr,int m);
void search1(struct node *ptr,int data);
void inorder(struct node *ptr);
void search(struct node *ptr);
void preorder(struct node *ptr);
void postorder(struct node *ptr);
int smallest(struct node *ptr);
int largest(struct node *ptr);
int height(struct node *ptr);
void delete1(struct node *ptr);

int main()
{
    int ch,h,small,larg,levl,serch,fkey;
    printf("\n        BST OPERATIONS ");
    while(1)
    {
    	printf("\n1 - Insert an element into tree\n");
        printf("2 - Delete an element from the tree\n");
        printf("3 - Inorder Traversal\n");
        printf("4 - Preorder Traversal\n");
        printf("5 - Postorder Traversal\n");
        printf("6 - No of NODES\n");
        printf("7 - Height of the tree\n");
        printf("8 - Display in tree format\n");
        printf("9 - Find MIN and MAX:\n");
        printf("10- Search operation\n");
        printf("11- Level ordering\n");
        printf("12- Find Predecessor and successor\n");
        printf("13- EXIT\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 2:    
            delet();
            break;
        case 3:    
            inorder(root);
            break;
        case 4:    
            preorder(root);
            break;
        case 5:    
            postorder(root);
            break;
        case 6:
           printf("\n the no of nodes in tree: %d",ob);
           break;
        case 7:
           h=height(root);
           printf("\n the height of the tree is: %d",h);
           break;
        case 8:
           display(root,0);
           break;
        case 9:
           small=smallest(root);
           larg=largest(root);
           printf("\n The minimum and maximum in the tree are: %d  and  %d",small,larg);
           break;
        case 10:
           printf("\n enter the value to be searched in tree:");
           scanf("%d",&serch);
           search_element(root,serch,0);
           break;
        case 11: 
           printf("\n Enter the level no to be displayed ");
           scanf("%d",&levl);
           displayLevel_LtoR(root,levl);
           printf("\n Level ordering\n ");
           order(root);
           break;
        case 12:
           printf("\n Enter the number whose predecessor and succcessor ");
           scanf("%d",&fkey);
           successorPredecessor(root,fkey);
           if(predecessor==0)
           printf("\n No predecessor");
           else
           printf("\n Predecessor is %d",predecessor);
           if(successor==0)
           printf("\n No successor");
           else
           printf("\n Successor   is %d",successor);
           break;
		case 13:   
           exit(0);
           break;
        default :     
            printf("Wrong choice, Please enter correct choice  ");
            break;    
        }
    }
}
int height(struct node *ptr)
{
	int hright,hleft;
    hleft=hright=0;
	if(ptr==NULL)
	{
		return 0;
	}  
    hleft=height(ptr->l);
    hright=height(ptr->r);
    if(hleft>hright)
       return 1+hleft;
    else
       return 1+hright;
}                     
void insert()
{
    int data;
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data= data;
    temp->l =temp->r = NULL;
    if (root == NULL) 
        root = temp;
    else    
        search(root);
	ob++;    
}
void search(struct node *ptr)
{
    if ((temp->data> ptr->data) && (ptr->r != NULL))      
        search(ptr->r);
    else if ((temp->data> ptr->data) && (ptr->r == NULL))
        ptr->r = temp;
    else if ((temp->data< ptr->data) && (ptr->l != NULL))    
        search(ptr->l);
    else if ((temp->data< ptr->data) && (ptr->l == NULL))
        ptr->l = temp;
} 
/* recursive function to perform inorder traversal of tree */
void inorder(struct node *ptr)
{	
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (ptr->l != NULL)    
        inorder(ptr->l);
    printf("%d -> ", ptr->data);
    if (ptr->r != NULL)    
        inorder(ptr->r);
}
/* To find the preorder traversal */
void preorder(struct node *ptr)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d -> ", ptr->data);
    if (ptr->l != NULL)    
        preorder(ptr->l);
    if (ptr->r != NULL)    
        preorder(ptr->r);
}
/* To find the postorder traversal */
void postorder(struct node *ptr)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (ptr->l != NULL) 
        postorder(ptr->l);
    if (ptr->r != NULL) 
        postorder(ptr->r);
    printf("%d -> ", ptr->data);
} 
void search1(struct node *ptr, int pos)
{
    if ((pos>ptr->data))
    {
        t1 = ptr;
        search1(ptr->r,pos);
    }
    else if ((pos< ptr->data))
    {
        t1 = ptr;
        search1(ptr->l,pos);
    }
    else if ((pos==ptr->data))
    {
        delete1(ptr);
    }
}
void delet()
{
    int data;
    if (root == NULL)
    {
        printf("No elements in a tree to delete");
        return;
    }
    printf("Enter the data to be deleted : ");
    scanf("%d", &data);
    t1 = root;
    t2 = root;
    search1(root, data);
}
void order(struct node *ptr)
{
	int i,y=height(ptr);
	for(i=0;i<=y;i++)
	{
		displayLevel_LtoR(ptr,i);
		printf("\n");
	}
}
void displayLevel_LtoR(struct node* ptr, int level)  
{  
	if(ptr == NULL)  
		return;  
	if(level == 0)  
		printf("%d ", ptr->data);  
	displayLevel_LtoR(ptr->l, level-1); 
	displayLevel_LtoR(ptr->r, level-1);  
}
void delete1(struct node *ptr)
{
    int k;
    if ((ptr->l == NULL) && (ptr->r == NULL))
    {
        if (t1->l ==ptr)
        {
            t1->l = NULL;
        }
        else
        {
            t1->r = NULL;
        }
        ptr= NULL;
        free(ptr);
        return;
    } 
    /* To delete node having one left hand child */
    else if ((ptr->r == NULL))
    {
        if (t1 == ptr)
        {
            root =ptr->l;
            t1 = root;
        }
        else if (t1->l == ptr)
        {
            t1->l = ptr->l;
 
        }
        else
        {
            t1->r = ptr->l;
        }
        ptr= NULL;
        free(ptr);
        return;
    }
 
    /* To delete node having right hand child */
    else if (ptr->l == NULL)
    {
        if (t1 ==ptr)
        {
            root = ptr->r;
            t1 = root;
        }
        else if (t1->r == ptr)
            t1->r = ptr->r;
        else
            t1->l = ptr->r;
        ptr == NULL;
        free(ptr);
        return;
    }
 
    /* To delete node having two child */
    else if ((ptr->l != NULL) && (ptr->r != NULL))  
    {
        t2 = root;
        if (ptr->r != NULL)
        {
            k = smallest(ptr->r);
            flag = 1;
        }
        else
        {
            k =largest(ptr->l);
            flag = 2;
        }
        search1(root, k);
        ptr->data= k;
    }
 
}
int smallest(struct node *ptr)
{
    t2 = ptr;
    if (ptr->l != NULL)
    {
        t2 =ptr;
        return(smallest(ptr->l));
    }
    else    
        return (ptr->data);
}
int largest(struct node *ptr)
{
    if (ptr->r != NULL)                          
    {
        t2 = ptr;
        return(largest(ptr->r));
    }
    else    
        return(ptr->data);
}
void display(struct node *ptr,int level)
{
	int i;
	if(ptr == NULL )/*Base Case*/
		return;
	else
    {
		display(ptr->r, level+1);
		printf("\n");
		for (i=0; i<level; i++)
			printf("    ");
		printf("%d", ptr->data);
		display(ptr->l, level+1);
	}
}
void search_element(struct node *ptr, int pos,int l)
{   
    
    if ((pos>ptr->data))
    {
        t1 = ptr;
        l=l-1;
        search_element(ptr->r,pos,l);
    }
    else if ((pos< ptr->data))
    {
        t1 = ptr;
        l=l-1;
        search_element(ptr->l,pos,l);
    }
    else if ((pos==ptr->data))
	{ 
	    int z=abs(l);
        printf("The element found at level: %d",z);
    }
}
void successorPredecessor(struct node *root, int val) 
{
	struct node *t;
		if (root !=NULL) 
		{
			if (root->data == val) 
			{
				if (root->l != NULL) 
				{
					t = root->l;
					while (t->r != NULL)
					{
						t = t->r;
					}
					predecessor = t->data;
				}
				if (root->r != NULL) 
				{
					t = root->r;
					while (t->l != NULL) 
					{
						t = t->l;
					}
					successor = t->data;
				}
			} 
			else if (root->data > val) 
			{
				successor = root->data;
				successorPredecessor(root->l, val);
			} 
			else if (root->data < val) 
			{
				predecessor = root->data;
				successorPredecessor(root->r, val);
			}
		}
}







