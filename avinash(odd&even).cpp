#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num==0)
		printf("The number is invalid");
	else if(num<0)
		printf("Negative number is invalid");
	else if(num%2==0)
		printf("The number %d is EVEN",num);
	else if(num%2!=0)
		printf("The number %d is ODD",num);
}
