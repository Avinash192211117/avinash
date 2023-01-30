#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int output(int);
int main()
{
	int num;
	printf("Enter the number to conert:");
	scanf("%d",&num);
	output(num);
}
int output(int res)
{
	int i=0,a[100];
	while(res!=0)
	{
		a[i]=res%2;
		i++;
		res=res/2;
	}
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
}
