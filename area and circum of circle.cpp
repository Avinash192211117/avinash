#include<stdio.h>
int main()
{
	int rad;
    float pi=3.14,area,circum;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&rad);
    area = pi*rad*rad;
    printf("\nArea of the circle is: %0.2f ",area);
    circum=2*pi*rad;
    printf("\nCircumference of the circle is: %0.2f",circum);
    return 0;
}
