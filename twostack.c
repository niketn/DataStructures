#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int s[20],choice,n,top,top1,x,i,m;
char k;
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        getch();
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
		top++;
        s[top]=x;
		 		
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",s[top]);
        top--;
    }
}
void push1()
{
    if(top1<=m-1)
    {
        printf("\n\tSTACK is over flow");
        getch();
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
		top1++;       
        s[top1]=x;		
    }
}
void pop1()
{
    if(top1<=10)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",s[top1]);
        top1--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
        printf("\n%d",s[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
void display1()
{
    if(top1>=11)
    {
        printf("\n The elements in STACK \n");
        for(i=top1; i>=11; i--)
            printf("\n%d",s[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
int main()
{
    top=-1;top1=10;
    printf("\n       Enter the size of STACK-1 [MAX=50]:");
    scanf("%d",&n);
    printf("\n       Enter the size of STACK-2 [MAX=50]:");
    scanf("%d",&m);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH in stack-1\n\t 2.POP in stack-1\n\t 3.PUSH in stack-2\n\t 4.POP in stack-2\n\t 5.DISPLAY\n\t 6.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
          {
              push();              
          }
		  break;
          case 2:
          {
              pop();             
          }
		  break;
		  case 3:
          {
          	  push1();          	  
          }
		  break;
          case 4:
          {
          	 pop1();          	 
          }
		  break;
          case 5:
          printf("\n a.Display stack-1");
		  printf("\b b.Display stack-2"); 
		  scanf("%s",&k);
		  if(k=='a')
		  {
  			  display();
	      } 
		   if(k=='b')
		  {
  			  display1();
	      } 
		  break; 
		  break; 
          case 6:
          {
              printf("\n\t EXIT POINT ");
              exit(0);
              break;
          }
          default:
          {
          	 printf("\n INVALID OPTION!!!!!");
          }
      }
    }while(choice!=4);
}