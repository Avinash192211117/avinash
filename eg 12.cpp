#include <stdio.h>
int main()
{
	int n,x,y,temp,arr[]={1,3,2,4,7,1,9,2,0,2,1};    
	n=sizeof(arr)/sizeof(arr[0]);
	for(x=0;x<n-1;x++)
	{       
    for(y=0;y<n-x-1;y++)
	{         
        if(arr[y]>arr[y+1])
		{               
        	temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }
    }
    printf("Array after implementing bubble sort: ");
    for(x=0;x<n;x++)
	{
        printf("%d  ",arr[x]);
    }
}