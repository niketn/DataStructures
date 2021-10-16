#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
}*first1,*head,*temp1,*first2,*temp2,*tn1,*tn2,*p,*n,*pr;

void addatbeg1()
{
	
	head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
		if(head==NULL)
	{
		printf("no node created");//exit(0);
	}
	printf("enter data to be added:");
	scanf("%d",&head->data);
	
	if(first1==NULL)
	{
		first1=head;temp1=head;
	}
	else
	{
		head->link=first1;
		first1=head;
	}
}

void addatend1()
{
head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	if(head==NULL)
	{
		printf("no node created");//exit(0);
	}
	
	printf("enter data to be added:");
	scanf("%d",&head->data);
	
	if(first1==NULL)
	{
		first1=head;
		temp1=head;
	}
	else
	{
		temp1=first1;
		while(temp1->link!=NULL)
		{
			temp1=temp1->link;
		}
		temp1->link=head;
		
	}
}

void display1()
{
	temp1=first1;
	while(temp1!=NULL)
	{
		printf("%d ",temp1->data);temp1=temp1->link;
	}
}

void addatbeg2()
{
	
	head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
		if(head==NULL)
	{
		printf("no node created");//exit(0);
	}
	printf("enter data to be added:");
	scanf("%d",&head->data);
	
	if(first2==NULL)
	{
		first2=head;temp2=head;
	}
	else
	{
		head->link=first2;
		first2=head;
	}
}

void addatend2()
{
head=(struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	if(head==NULL)
	{
		printf("no node created");//exit(0);
	}
	
	printf("enter data to be added:");
	scanf("%d",&head->data);
	
	if(first2==NULL)
	{
		first2=head;
		temp2=head;
	}
	else
	{
		temp2=first2;
		while(temp2->link!=NULL)
		{
			temp2=temp2->link;
		}
		temp2->link=head;
		
	}
}

void display2()
{
	temp2=first2;
	while(temp2!=NULL)
	{
		printf("%d ",temp2->data);temp2=temp2->link;
	}
}

void concat12()
{
	
	temp1=first1;
	while(temp1->link!=NULL)
	{
		temp1=temp1->link;
	}
	temp1->link=first2;
	first2=first1;
}

void split1()
{
	int pos,i;
printf("\n to split LL1 \nenter position to be split at:");
scanf("%d",&pos);
temp1=first1;

for(i=0;i<pos-1;i++)
{
	if(temp1!=NULL)
	{
		temp1=temp1->link;
	}
	else
	{
		printf("insufficient nodes in LL1 to split at position %d ",pos);return;
	}
}
tn1=first1;
printf("First half = ");
while(tn1!=temp1)
{
	printf("%d ",tn1->data);
	tn1=tn1->link;
}
printf("%d ",tn1->data);
printf("\nSecond half = ");
tn1=tn1->link;
while(tn1!=NULL)
{
	printf("%d",tn1->data);
	tn1=tn1->link;
}

}

void split2()
{
	int pos,i;
printf("\n to split LL1 \nenter position to be split at :");
scanf("%d",&pos);
temp2=first2;

for(i=0;i<pos-1;i++)
{
	if(temp2!=NULL)
	{
		temp2=temp2->link;
	}
	else
	{
		printf("insufficient nodes in LL1 to split at position %d",pos);return ;
		//exit(0);
	}
}
tn2=first2;
printf("First half = ");
while(tn2!=temp2)
{
	printf("%d ",tn2->data);
	tn2=tn2->link;
}
printf("%d ",tn2->data);
tn2=tn2->link;
printf("\nSecond half = ");
while(tn2!=NULL)
{
	printf("%d ",tn2->data);
	tn2=tn2->link;
}
}

void rev1()
{
	p=first1;
	n=p->link;
	pr=NULL;
	
	while(p->link!=NULL)
	{
		p->link=pr;
		pr=p;
		p=n;
		n=p->link;
	}
	p->link=pr;
	pr=p;
	p=NULL;
	
	
	first1=pr;
temp1=first1;

printf("\nreversed LL1:\n");

while(temp1!=NULL)
{
	printf("%d ",temp1->data);
	temp1=temp1->link;
}

}

void rev2()
{
	p=first2;
	n=first2->link;
	pr=NULL;
	
	while(p->link!=NULL)
	{
		p->link=pr;
		pr=p;
		p=n;
		n=p->link;
	}
	p->link=pr;
	pr=p;
	p=NULL;
	
	first2=pr;

temp2=first2;
printf("\nreversed LL1:\n");
while(temp2!=NULL)
{
	printf("%d ",temp2->data);
	temp2=temp2->link;
}
}

int main()
{
	int ch;
	head=NULL;p=NULL;pr=n=NULL;
	
	while(ch!=12)
	{
		printf("\nenter:\n1)to add to beg of LL1 \n2)to add to end of LL 1 \n3)to display LL1\n");
		printf("4)to add to beg of LL2 \n5)to add to end of LL 2 \n6)to display LL2");
		printf("\n7)to concat LL1 and LL2\n8)to split LL1\n9)to split LL2\n10)to reverse LL1\n11)to reverse LL2\n12)to exit\nenter choice:");
		scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			addatbeg1();break;
		case 2:
			addatend1();break;
		case 3:
			display1();break;
		case 4:
			addatbeg2();break;
		case 5:
			addatend2();break;
		case 6:
			display2();break;
		case 7:
			concat12();break;
		case 8:
			split1();break;
		case 9:
			split2();break;
		case 10:
			rev1();break;
		case 11:
			rev2();break;
		case 12:
		//	exit(0);
		break;
	}
	}
	getch();
	return 0;
}
