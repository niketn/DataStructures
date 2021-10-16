#include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);
int main()
{
	int lo=1,hi,j,m=1,a[10],i,p;
	printf("\n enter the limit of the array:");
	scanf("%d",&hi);
	printf("\n enter the array:");
	for(i=1;i<hi;i++)
	{
		scanf("%d",&a[i]);
	}	
	quicksort(a, lo, hi);    
	printf("\nthe array is:");
	for(i=1;i<hi;i++)
	{
		printf("%d\t",&a[i]);
	}
}
void quicksort(int a[], int lo, int hi)
	{
		int p;
		if (lo < hi)
		{
			p = partition(a, lo, hi); 
           quicksort(a, lo, p - 1 ); 
           quicksort(a, p + 1, hi);
		}         
	}
int partition(int a[],int lo,int hi)
 {
 	int j,i;
   	int pivot = a[hi];
    i= lo-1;  
    for(j= lo;j<hi-1;j++)
    {
    	if(a[j]< pivot)
		{
			i=i + 1; 
            a[j]=a[i];
		} 
        if(a[hi]<a[i + 1])
        a[hi]=a[i + 1];
        return  i + 1;
    }
} 