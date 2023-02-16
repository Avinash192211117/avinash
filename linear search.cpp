#include<stdio.h>
int main()
{
	int i,n,val,c,p,arr[]={1,2,3,1,2,3,4,2,5,2,6,7};
	printf("Enter the number to be searched:");
	scanf("%d",&val);
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			c++;
			p=i;
		}
	}
	if(c==0)
	{
		printf("Element not found");
	}
	else
		printf("Number %d found at %d position",val,p+1);
}