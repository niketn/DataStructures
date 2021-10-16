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
