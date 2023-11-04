#include<stdio.h>
int main()
{
	int n,i,bur[100],gant[100],temp=0,j;
	float avt=0,tt=0;
	printf("enter the no.of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the burst time for process %d:",i+1);
		scanf("%d",&bur[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(bur[i]>bur[j])
			{
				temp=bur[i];
				bur[i]=bur[j];
				bur[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			gant[i]=0;
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
	printf("average waiting time:%0.2f",avt/n);
	printf("turn around time:%0.2f",tt/n);
}