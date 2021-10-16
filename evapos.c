#include<stdio.h>
int priority(char o)
{
	if(o=='+'||o=='-'|| o=='*'|| o=='^'||o=='/')
	{
		return 1;
	}
	else
	return 0;
}
char stack[10];
int top=-1;
void push(int x)
{
    stack[++top] = x;
}
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
int main()
{
	char a[10],i,k;
	int p,m,n,e=0;
	printf("\n enter the postfix expression:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		p=priority(a[i]);
		if(p==0)
		{
			push(a[i]);
		}
		if(p==1)
		{
			if(a[i]=='+')
			{
				m=pop();
				n=pop();
				e=m+n;
				push(e);
			}
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c ",stack[top]);
	}
}