#include<stdio.h>
#include<stdlib.h>
int priority(char);
void push(char);
char pop();
int main()
{
	char a[10],s[10],pf[10],t,k;
	int top=-1;
	int i,j=0,p;
	printf("\n ENTER THE EXPRESION:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
		{
			push(a[i]);
		}
		if(a[i]==')')
		{
			
		}
		p=priority(a[i]);
		if(p==0)
		{
		   pf[j]=a[i];
		   j++;	
		}
		if(p==1||p==2||p==3)
		{
			
			while(s[i]>pf[k])
			{
				push(k);
				i++;
			}
		}
	}
	printf("\n The postfix expression is: ");
	for(i=0;a[i]!='\0';i++)
	{		
		printf("%c",pf[i]);
	}
}
int priority(char c)
{
	if(c=='$'||c=='^')
	{
		return 3;
	}
	if(c=='*'||c=='/')
	{
		return 2;
	}
	if(c=='+'||c=='-')
	{
		return 1;
	}
	else 
	return 0;
}
void push(char t)
{
	int top=-1;
	char s[10];
   if(top>=9)
   {
   	 printf("\n stack overflow");
   	 exit(0);
   }
   else
   {
   	top++;
   	s[top]=t;
   }
}
char pop()
{
	char d,s[10];int top;
	if(top<=-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		d=s[top];
		top--;
		return d;
	}
}