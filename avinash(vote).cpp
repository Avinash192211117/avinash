#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age :");
	scanf("%d",&age);
	if(age==0||age<0)
		printf("Invalid age");
	else
		printf("You are allowed to vote after %d",18-age);
	
}
