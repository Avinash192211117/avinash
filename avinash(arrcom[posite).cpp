#include<stdio.h>
int main () {
    int i,n,a[100]={16,18,27,16,23,21,19,12},count=0;
    for(i=0;i<n;i++)
    {
        for(int j=1;j<a[i];j++)
        {
            
            if(a[i]%j==0)
            {
                printf("%d\t",a[i]);
                count++;
                break;
            }
            
        }
    
}
    printf("\ntotal composite number are: %d",count);
}
