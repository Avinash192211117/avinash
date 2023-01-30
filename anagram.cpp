#include<stdio.h>
#include<string.h>
int main()
{
	char arr[50],arr2[50],temp;
	int i,j,len1,len2,count=0;
	printf("Enter the first string:");
	gets(arr);
	printf("Enter the second string:");
	gets(arr2);
	len1=strlen(arr);
	len2=strlen(arr2);
	if(len1!=len2)
	{
		printf("Given strings %s and %s are not anagram",arr,arr2);
	}
	else
	{
		for(i=0;i<len1-1;i++)
		{
			for(j=i+1;j<len1;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
				if(arr2[i]>arr2[j])
				{
					temp=arr2[i];
					arr2[i]=arr2[j];
					arr2[j]=temp;
				}
			}
		}
	}
	for(i=0;i<len1;i++)
	{
		if(arr[i]!=arr2[i])
		{
			count=0;
		}			
		else
		{
			count=count+1;
		}
	}
	if(count==0)
	{
		printf("not an anagram");
	}
	else
	{
		printf("anagram");
	}
}
