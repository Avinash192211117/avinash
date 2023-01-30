#include<stdio.h>
int main()
{
	int i,j=0,k;
	printf("enter the row:");
	scanf("%d",&k);
	printf("Pattern pyramid:\n");
	for(i=1;i<=k;i++)
	{
		for(j=k;j>=i;j--)
		{
		printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j*j);
		}
		printf("\n");
	}
}
