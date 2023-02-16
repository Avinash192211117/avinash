#include <stdio.h>
int main()
{
	int i,low,high,mid,n,key,array[]={1,2,3,4,5,6,7,8,9};
	n=sizeof(array)/sizeof(array[0])-1;
	printf("Enter value to find:");
	scanf("%d",&key);
	low=0;
	high=n;
	mid=(low+high)/2;
	while(low<=high) 
	{
		if(array[mid]<key)
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(array[mid]==key) 
		{
			printf("%d found at location %d",key,mid+1);
			break;
		}
		else
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	if(low > high)
	printf("Not found! %d isn't present in the list.n", key);
	return 0;
}