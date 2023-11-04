#include<stdio.h>
int main()
{
	int n,i,bur[100],avt=0,tt=0,gant[100];
	printf("enter the no.of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the burst time for process %d:",i+1);
		scanf("%d",&bur[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			gant[i]=gant[i]+bur[i];
			tt=gant[i];
		}
		else
		{
			gant[i]=gant[i-1]+bur[i];
			avt=avt+gant[i-1];
			tt=tt+gant[i];
			
		}
	}
	printf("avg waiting time:%d",avt/n);
	printf("turn around time:%d",tt/n);
}