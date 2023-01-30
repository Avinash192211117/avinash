#include <stdio.h>
int main()
{
	int num;
	scanf("%i", &num);
	if (num>0)
	    printf("positive");
	if (num==0)
	    printf("has no value");
	else
	{
		printf("negative");
	}
	   
	return 0;
}

