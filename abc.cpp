#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],b[1000],c[2000],i,n1,n2;
	printf("A Enter size");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("B Enter size");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1+n2;i++)
	{
		if(i<n1)
			c[i]=a[i];
		else
			c[i]=b[i-n1];
	}
	printf("A array");
	for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("B array");
	for(i=0;i<n2;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("C array");
		for(i=0;i<n1+n2;i++)
	{
		printf("%d ",c[i]);
	}
	
}