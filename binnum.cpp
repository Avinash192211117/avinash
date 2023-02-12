#include<stdio.h>
#include<math.h>
int main()
{
	int num,i=0,j,rem,arr[10];
	printf("Enter the number to be converted:");
	scanf("%d",&num);
	printf("Binary number:");
	while(num>0)
	{
		rem=num%2;
		arr[i]=rem;
		num=num/2;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
}
