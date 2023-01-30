#include<stdio.h>
#include<stdlib.h>
int find_Num(int);
int main()
{
    int num;
    printf("Enter a number to check odd or even\n");
    scanf("%d",&num);
    find_Num(num);
}
int find_Num(int num)
{
	if(num==0)
	{
		printf("Invalid input....");
	}
	else
 	{
 		if(num%2==0)
		{
    	printf("\n%d is an even number",num);
		}
		else	
		{
    	printf("\n%d is an odd number",num);
		}
	}

}
