#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* num,i,n;
	printf("Enter the total number of elements :");
	scanf("%d",&n);
	num=(int*)calloc(n,sizeof(int));
	if(num==NULL)
	{
		printf("Memory not allocated");
	}
	else
		printf("Memory allocated");
	for(i=1;i<n;i++)
	{
		printf("enter the elements:");
		scanf("%d",&i);
	}
	for(i=1;i<n;i++)
	{
		if(*num<*(num+1))
		{
			*num=*(num+1);
		}
	}
	printf("the largest number",*num);
}
