#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	char str[100][100],s[100],choice;
	printf("Enter the number of names:");
	scanf("%d",&n);
	printf("Enter the names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	}
	printf("Enter the choice(A,D):");
	scanf("%s",&choice);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
		}
	}
	if(choice=='a'||choice=='A')
	{
		printf("The ordered names:");
		for(i=0;i<n;i++)
		{
			printf("%s\n",str[i]);
		}	
	}
	if(choice=='d'||choice=='D')
	{
		printf("The ordered names:");
		for(i=n;i>=0;i--)
		{
			printf("%s\n",str[i]);
		}
	}
	else
		printf("Invalid input...");
}