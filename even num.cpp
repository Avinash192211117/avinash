#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i);
		i=i+2;
	}
	return 0;
}