#include<stdio.h>
#include<stdlib.h>
int oddnum(int);
int evennum(int);
int sqof(int);
int cubeof(int);
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
		oddnum(n);
		evennum(n);
		sqof(n);
		cubeof(n);
}
int oddnum(int m)
{
	int i,j,c=0;
	float sum=0,mean;
	for(j=1,i=1;j<=m;i=i+2,j++)
		{
			sum=sum+i;
			c++;
		}
		mean=sum/c;
		printf("The mean of first %d ODD num is %0.2f\n",c,mean);
}
int evennum(int m)
{
	int i,j,c=0;
	float sum=0,mean;
	for(j=1,i=0;j<=m;i=i+2,j++)
	{
		sum=sum+i;
		c++;
	}
	mean=sum/c;
	printf("The mean of first %d EVEN num is %0.2f\n",c,mean);
}
int sqof(int m)
{
	int i;
	float sum=0,mean;
	for(i=1;i<=m;i++)
		sum=sum+i*i;
	mean=sum/m;
	printf("The mean of first %d SQUARE num is %0.2f\n",m,mean);
}
int cubeof(int m)
{
	int i;
	float sum=0,mean;
	for(i=1;i<=m;i++)
		sum=sum+i*i*i;
	mean=sum/m;
	printf("The mean of first %d CUBE num is %0.2f\n",m,mean);
}
