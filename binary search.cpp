#include<stdio.h>
int main()
{
	int i,val,n,mid,last,first,arr[]={1,2,4,5,8,7,10,3,6,9};
	printf("Enter the number to be searched:");
	scanf("%d",&val);
	n=sizeof(arr)/sizeof(arr[0]);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid] == val)
		{
			printf("Number %d found at %d position",val,mid);
		}
		else
		{
			last=mid-1;
			mid=(first+last)/2;
		}
		
	}
	if(first>last)
		printf("Element not present");
}