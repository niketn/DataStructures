#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10],branch[8];
};
int main()
{
	int c,i,ser,urno,n,co,m=0,pre,we=0,l;
	char ch,*t,*e;
	t="COMP";
	e="IT";
	struct student s[10];
	printf("\t               STUDENT MANGEMENT SYSTEM \n");
	printf("\t              ========================== \n");
	printf("\n          Enter the no of entries to be made:");
	scanf("%d",&n);
	printf("\n                    enter the data:");
			for(i=0;i<n;i++)
			{
				printf("\nenter name:");
				scanf("%s",&s[i].name);
				printf("\nenter rollno:");
				scanf("%d",&s[i].rno);
				printf("\nenter branch in capital:");
				scanf("%s",s[i].branch);
				co=i;
			}
	while(1)
	{
		printf("\n             ~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n              1.enter details");
		printf("\n              2.search");
		printf("\n              3.update");
		printf("\n              4.filter");
		printf("\n              5.display records");
		printf("\n              6.Exit");
		printf("\n             ~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n  enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
   	        if(co<=n)
	        {
		       pre=n;
		       printf("\n Enter the no of entries to be made:");
	           scanf("%d",&m);
	           printf("\n enter the data:");
		       for(i=pre;i<=m+1;i++)
		       {
			      printf("\nenter name:");
				  scanf("%s",&s[i].name);
				  printf("\nenter rollno:");
				  scanf("%d",&s[i].rno);
				  printf("\nenter branch in capital:");
				  scanf("%s",s[i].branch); 
		       }		
         	}
         	else
			 printf("\n cannot enter data");
			break;
			case 2:
			printf("\nenter the rollno to be searched :");
			scanf("%d",&ser);
			for(i=0;i<m+n;i++)
			{
				if(s[i].rno==ser)
				{
					we++;
					printf("\n *************************");
					printf("\n NAME:%s",s[i].name);
					printf("\n Roll no:%d",s[i].rno);
					printf("\n BRANCH:%s",s[i].branch);
					printf("\n *************************\n");
				}
			}
			if(we==0)
			{
				printf("\n DATA NOT FOUND!!");
			}
			break;
			case 3:
			printf("\nenter the rollno need to be updated:");
			scanf("%d",&urno);
			for(i=0;i<m+n;i++)
			{
				if(urno==s[i].rno)
				{
					printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~");
					printf("\n  a.name");
					printf("\n  b.rollno");
					printf("\n  c.branch");
					printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~");
					printf("\nenter your option:");
					scanf("%s",&ch);
					switch(ch)
					{
						case 'a':
					    printf("\nenter the new name:");
				    	scanf("%s",&s[i].name);
    					break;
    					case 'b':
    					printf("\nenter the new rollno:");
   						scanf("%d",&s[i].rno);
    					break;
    					case 'c':
    					printf("\nenter the new branch in capital:");
				    	scanf("%s",&s[i].branch);
    					break;
    					default:
    					printf("\n INVALID OPTION\n");
					}					
				}
				else
				printf("\n The Roll no not found...enter appropriate value\n");
			}               
			break;
			case 4:
			printf("\n 1.COMP details");
			printf("\n 2.IT details");
			printf("\n enter your option:");
			scanf("%d",&l);
			switch(l)
			{
				case 1:
				printf("\n DETAILS OF COMP");
				for(i=0;i<m+n;i++)
			    {
				    if(strcmp(s[i].branch,t)==0)
				   {
					  printf("\n NAME: %s",s[i].name);
					  printf("\n BRANCH: %s",s[i].branch);
					  printf("\n ROLL NO: %d",s[i].rno);					
				   }
			    }
			    break;
			    case 2:
			    printf("\n DETAILS OF IT");
			    for(i=0;i<m+n;i++)
			   {
				   if(strcmp(s[i].branch,e)==0)
				   {
					  printf("\n NAME: %s",s[i].name);
					  printf("\n BRANCH: %s",s[i].branch);
					  printf("\n ROLL NO: %d",s[i].rno);
				   }
			   }
			   break;
			}			
			printf("\n------------------------------\n");
			break;
			case 5:
			printf("\n-----------------------");
			printf("\n THE RECORDS ARE");
			for(i=0;i<m+n;i++)
			{
			    printf("\nNAME:%s",s[i].name);
			    printf("\nRoll no:%d",s[i].rno);
			    printf("\nBRANCH: %s",s[i].branch);
			}
			printf("\n-----------------------\n");
			break;
			case 6:
			exit(0);
			break;
			default:
			printf("\n INVALID OPTION...");															
		}
	}
}