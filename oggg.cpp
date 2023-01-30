#include<stdio.h>
int main()
{
	int arr[]={1,2,3,5,6,7,8,9},n,num,i,r;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Enter the position of the element :");
	scanf("%d",&r);
	for(i=n+1;i>=r+1;i--)
	{
		arr[i+1]=arr[i];
			
	}
	arr[r]=num;
	printf("Array is :");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}
}
