#include<stdio.h>
int main()
{
	float num;
	printf("Enter the number :");
	scanf("%f",&num);
	if(num==0)
	{
		printf("The number is invalid");
		return 0;
	}
	else if(num<0)
		printf("Negative number is invalid");
	else 
		printf("The square of %0.2f number is %0.4f\n",num,num*num);
		printf("The cube of %0.2f number is %0.4f",num,num*num*num);
}

