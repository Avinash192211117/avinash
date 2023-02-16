#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],*ptr;
	int i=0;
	printf("enter string :");
	gets(str);
	ptr=str;
	while(*ptr!='\0')
	{
		i++;
		ptr++;
	}
	printf("String length %d",i);
}
