#include<stdio.h>
int main()
{
	int n,sum=0,i,avg;
	printf("Enter the num:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("Sum=%d\n",sum);
	printf("Average=%d",avg);
}
