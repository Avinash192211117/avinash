#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void oddnum(int);
int main()
{
	int mean1,n,choice;
	printf("enter the number:");
	scanf("%d",&n);
	oddnum(n);
}
void oddnum(int m)
{
	int i;
	float sum=0,mean;
	for(i=1;i<m;i++)
	{
		sum=sum+i;
	}
	mean=sum/m;
	printf("The mean of %d num is %d",m,mean);
}

