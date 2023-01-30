#include<stdio.h>
int main()
{
	char str[20],*pt;
	int i=0;
	printf("enter any string below 20 characters :");
	gets(str);
	pt=str;
	while(*pt!='\0')
	{
		i++;
		pt++;
	}
	printf("length of the string :%d",i);
	return 0;
}
