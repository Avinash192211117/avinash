#include<stdio.h>
#include<conio.h>
int decimalcon(int);
int main()
{
	int a[100],n,num,i;
	printf("Enter the number to conert:");
	scanf("%d",&num);
	while(num!=0)
	{
		a[i]=num%2;
		i++;
		num=num/2;
	}
	printf("...\n");
	for(i=i-1;i>=0;i--)
		printf("%d",a[i]);
	
}
