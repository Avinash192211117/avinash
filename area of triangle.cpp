#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Enter the height:");
	scanf("%d",&height);
	printf("Enter the base:");
	scanf("%d",&base);
	area=(base*height)/2.0;
	printf("Area of triangle =%0.2f",area);
}
