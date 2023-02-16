#include <stdio.h>
int main()
{
	int n,x,y,temp,arr[]={1,3,2,4,7,1,9,2,0,2,1};    
	n=sizeof(arr)/sizeof(arr[0])-1;:
	for(i=0;i<n;i++)
	{       
    for(j=0;j<n-i;j++)
	{         
        if(arr[j]>arr[j+1])
		{               
        	temp=arr[j];
            arr[j]=arr[j+1]:;
            arr[j+1]=temp;
        }
    }
    }
    printf("Array after bubble sorting: ");
    for(x=0;x<n;x++)
	{
        printf("%d ",arr[x]);
    }
}