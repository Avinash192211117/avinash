#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int age;
};
void output(struct student v[],int n);
int main()
{
	struct student b[100];
	int n,i;
	printf("Enter the Numbers of student:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("student %d Detail\n",i+1);
		printf("Student Name:");
		scanf("%s",&b[i].name);
		printf("Age:");
		scanf("%d",&b[i].age);
	}
	output(b,n);
}
void output(struct student v[],int n)
{
	int i,m=1;
	for(i=0;i<n;i++,m++)
	{
		printf("Student No.%d\n",m);
		printf("Name :%s\n",v[i].name);
		printf("Age :%d\n",v[i].age);
	}

}
