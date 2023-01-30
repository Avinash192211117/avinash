#include<stdio.h>
int main()
{
	int num,n,i,a[100];
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("The negative elements in array:");
	for(i=0;i<n;i++)
		if(a[i]<0)
		printf("%d",a[i]);
	
}
