#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int arr[]={1,4,2,5,9,8,7,2,4};
    n=sizeof(arr)/sizeof(arr[0]);
    for (i=0;i<n;i++) 
    {
    	for(j=i;j<=n;j++)
    	{
        	if(arr[i]>arr[j])
        	{
            	temp=arr[i];
            	arr[i]=arr[j];
            	arr[j]=temp;
        	}
        }
    }
    printf("Sorted list in ascending order:");
    for (i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }
}