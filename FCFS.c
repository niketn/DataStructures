#include<stdio.h>
int main()
{
	int bt[50],n,i,j,wt[50],tat[50],avwt=0,avtat=0;
	printf("\n  ============-FCFS SCHEDULING-===========\n");
	printf("\n Enter no of processes:");
	scanf("%d",&n);
	printf(" Enter the Burst time respectively:\n");
	for(i=0;i<n;i++)
	{
		printf("P(%d)=",i+1);
		scanf("%d",&bt[i]);
	}
	for(i=1;i<n;i++)
	{
        wt[0]=0;
        wt[i]=0;
		for(j=0;j<i;j++)
	    wt[i]+=bt[j];
	}
	for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
    }
	printf("\n ===============================================================\n");
	for(i=0;i<n;i++)
	{
		printf(" P(%d)\t Burst Time:%d\t Waiting Time:%2.2d   Turn-aroundtime:%d",i+1,bt[i],wt[i],tat[i]);
		printf("\n");
	}
	avwt/=i;
    avtat/=i;
    printf("\n   Average Waiting Time:%d",avwt);
    printf("\n   Average Turnaround Time:%d\n",avtat);
	printf(" ===============================================================\n");
}