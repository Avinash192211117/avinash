#include <stdio.h>    
int main()    
{    
    int arr[] = {16, 18, 27, 16, 23, 21, 19};     
    int n= sizeof(arr)/sizeof(arr[0]);        
    printf("Original array: \n");    
    for (int i=0;i<n; i++) 
	{     
        printf("%d ",arr[i]);     
    }       
    printf("\nArray in reverse order: \n");    
    for (int i=n-1;i>=0;i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}
