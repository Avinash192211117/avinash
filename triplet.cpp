#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("Enter the value of A:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<a;b++)
		{
			for(c=b;c<a;c++)
			{
				if(b*b+c*c==a*a)
				{
					printf("(%d,%d,%d)\n",b,c,a);
				}
			}
		}
	}
}