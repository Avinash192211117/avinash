#include<stdio.h>
int main()
{
	int i,j=0,k;
	printf("enter the row:");
	scanf("%d",&k);
	printf("Pattern pyramid:\n");
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
}
