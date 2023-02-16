#include<stdio.h>
int main()
{
	int a,b;
	int *ptr1,*ptr2;
	printf("Enter A value:");
	scanf("%d",&a);
	printf("Enter B value:");
	scanf("%d",&b);
	ptr1=&a;
	ptr2=&b;
	printf("Addition of %d and %d is %d\n",*ptr1,*ptr2,*ptr1+*ptr2);
	printf("subraction of %d and %d is %d\n",*ptr1,*ptr2,*ptr1-*ptr2);
	printf("multiplication of %d and %d is %d\n",*ptr1,*ptr2,*ptr1 * *ptr2);
}