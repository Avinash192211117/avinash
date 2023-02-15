#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* ptr;
	int n, i,big=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if (ptr == NULL) 
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory successfully allocated using malloc.\n");
		for (i = 0; i < n; ++i)
		{
			scanf("%d",&ptr[i]);
		}
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) 
		{
			printf("%d, ", ptr[i]);
		}
		for(i=0;i<=n;i++)
		{
			if(big<ptr[i])
				big=ptr[i];
		}
		printf("\nBIG=%d",big);
	}
}

