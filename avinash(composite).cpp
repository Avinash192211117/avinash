#include<stdio.h>
int main()
{
	int num,i,flag=0,a[]={16,18,27,16,23,21,19},k;
	for(k=1;k<=a[i];k++)
	{
		if(a[i]%k==0)
			flag++;
	}
	if(flag>2)
		printf("The given %d is a composite number",num);
	else
		printf("The given %d is not a composite number",num);
}
