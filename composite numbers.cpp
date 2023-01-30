#include<stdio.h>
int main () {
    int i,n,a[]={16,18,27,16,23,21,12},count=0,b=0,j;
    n=sizeof(a)/sizeof(a[0]);
    printf("composite numbers are:");
    for(i=0;i<n;i++)
    {
    	for(j=1;j<=a[i];j++)
    	if(a[i]%j==0)
    	count++;
    if(count>2)
    {
    	printf("%d",a[i]);
    	b++;
	}
	count=0;
	}

    printf("\ntotal composite number are: %d",count);
}
