#include<stdio.h>
int main()
{
	char a[10000];
	int i,v=0,n=0,s=0,c=0;
	printf("Enter the string :");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		{
			v++;
		}
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
		{
			n++;
		}
		if(a[i]=='!'||a[i]=='@'||a[i]=='#'||a[i]=='$'||a[i]=='%'||a[i]=='^'||a[i]=='&'||a[i]=='*'||a[i]=='('||a[i]==')'||a[i]=='+'||a[i]=='='||a[i]=='-'||a[i]=='.'||a[i]==','||a[i]=='['||a[i]==']'||a[i]=='{'||a[i]=='}')
		{
			s++;
		}
		else
		{
			c++;
		}
		i++;
	}
	printf("The total number of vowels is %d\n",v);
	printf("The total number of numbers is %d\n",n);
	printf("The total number of special characters is %d\n",s);
	printf("The total number of consonents is %d\n",c);
}
