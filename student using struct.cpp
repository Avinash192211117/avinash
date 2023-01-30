#include<stdio.h>
#include <conio.h>
struct studentdetail
{
	char name[30];
	int age;	
};	
int main()
{
	struct studentdetail a ;
	printf(" Enter name\n");
	scanf("%s\n",a.name);
	printf("Enter age");
	scanf("%d\n",a.age);
	return 0;
}
