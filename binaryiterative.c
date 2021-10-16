#include<stdio.h>
int main()
{
   int range[50], T,i,j,NUM;
   int first=0,last,mid=0,find=-1,search;
   printf("\nEnter the total numbers in array:");
   scanf("%d",&NUM);
   for(i=0;i<NUM;i++)
   {
     printf("Value .%d - ",i+1);
     scanf(" %d",&range[i]);
   }
   for(i=0;i<NUM-1;i++)
  {
     for(j=i+1;j<NUM;j++)
     {
        if(range[i]>range[j])
        {
            T=range[i];
            range[i]=range[j];
            range[j]=T;
        }
     }
  }
  printf("Sorted elements are :\n");
  for(i=0;i<NUM;i++)
  {
       printf("\nValue .%d - ",i+1);
     printf(" %d",range[i]);
  }
  last=NUM-1;
  printf("\nEnter the element to search in the above list");
  scanf("%d",&search);
  for(i=0;i<NUM;i++)
  {
     mid=(first+last)/2;
     if(range[mid]==search)
    {
      find=mid;
      break;
    }
    else
    if(range[mid]<search)
    first=mid+1;
    else
    last=mid-1;
  }
  if(find>=0)
  printf("\nThe position of the element is :%d\n",++find);
  else
  printf("\nSearch not found\n");
}
