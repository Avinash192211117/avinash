#include<stdio.h>
#include<string.h>
struct book 
{
	char title[30],author[20],subject[20];
	int book_id;
};
void bookdetail(struct book b[],int n);
int main()
{
	struct book b[100];
	int n,i;
	printf("Enter the number of books :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Book %d title :",i);
		scanf("%s",&b[i].title);
		printf("Book %d author :",i);
		scanf("%s",&b[i].author);
		printf("Book %d subject :",i);
		scanf("%s",&b[i].subject);
		printf("Book %d book ID :",i);
		scanf("%d",&b[i].book_id);
		bookdetail(b,n);
	}
void bookdetail(struct bookdetail v[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("Book title :%s\n",v[i].title);
		printf("Book author :%s\n",v[i].author);
		printf("Book subject :%s\n",v[i].subject);
		printf("book ID :%d\n",v[i].book_id);
	}
}
	

