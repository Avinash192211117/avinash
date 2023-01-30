#include<stdio.h>
int main()
{
	int num1,num2;
	int *ptr=&num1;
	int *ptr2=&num2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("addition of %d and %d is %d",num1,num2,*ptr+*ptr2);
	
}
