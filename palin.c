#include<stdio.h>
#include<conio.h>
#include<string.h>
int s1[10];
int choice,n,top,i,m=0;
void push(char);
int pop();
void display();
int main()
{
    top=-1;
	char st[10],c;
    printf("\n       Enter the size of STACK-1 [MAX=10]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.Enter \n\t 2.Check for palindrome\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
          printf(" Enter a string:");
          scanf("%s",&st);
		  for(i=0;st[i]!='\0';i++)
		  {
  			c=st[i];
  			push(c);
  		  }                
		  break;
          case 2:
          for(i=0;i<n/2;i++)
          {
          	if(pop()==st[i])
          	{
          	   m=1;
            }
			//top--;
          }
          if(m==1)
          printf("\n string is a palindrome");
          else
          printf("\n string is not a palindrome");
		  break;
          case 3:
		  display();
		  break;   
          case 4:
          {
              printf("\n\t EXIT POINT ");
              break;
          }
          default:
          {
              printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
          }
          // getch();
        }
    }
    while(choice!=4);
}
void push(char x)
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        getch();
    }
    else
    {   
	    top++;   
        s1[top]=x;
    }
}
int pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        //printf("\n\t The popped elements is %c",s1[top]);
        return s1[top];
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%c",s1[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}