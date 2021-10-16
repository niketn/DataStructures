#include<stdio.h>
int binary(int a[],int l,int h,int x,int fo)
{
	int mid;
	if(l==h)
	{
		if(x==a[l])
		return l;
		else
		return -1;
	}
	else
	{
		mid=(l+h)/2;
		if(x==a[mid])
		return mid;
		else if(x<a[mid])
		return binary(a,l,mid-1,x,fo);
		else
		return binary(a,mid+1,h,x,fo); 
	}
}
int main()
{
   int range[50], T,i,j,NUM,fo=-1;
   int first=0,last,mid=0,search;
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
  fo=binary(range,first,last,search,fo);
  if(fo>=0 && binary(range,first,last,search,fo)+1)
  printf("\n the element found is at loacation : %d\n",++fo);
  if(fo==-1)
  printf("\n element not found!!!!!\n");
}