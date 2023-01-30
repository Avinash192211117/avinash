#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    int arr[]={1,2,3,2,1,5,7,6,5,6,89,9}, i, j, k, size=sizeof(arr)/sizeof(arr[0]);   
    for (i=0;i<size;i++)  
    {  
        for ( j=i+1;j<size;j++)  
        {   
            if (arr[i]==arr[j])  
            {  
            	for(k=j;k<size-1;k++)
                {  
                    arr[k]=arr[k+1];  
                }  
            	size--;  
                j--;      
            }  
        }  
    }  
    printf (" \n Array elements after deletion of the duplicate elements: ");  
    for (i=0;i<size;i++)  
    {  
        printf (" %d", arr[i]);  
    }  
    return 0;  
}
