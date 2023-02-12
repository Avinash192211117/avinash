#include<stdio.h>
int main()
{
	int time;
	float pri,rate,intrest;
    printf("Enter the value of principal amount, rate and time:");
    scanf("%f%f%d", &pri,&rate,&time);
    intrest = (pri*rate*time)/100.0;
    printf("\nAmount = %0.3f ",pri);
	printf("\nRate = %0.3f",rate);
    printf("\nTime= %d years",time);
    printf("\nSimple Interest =%0.3f",intrest);
	return 0;
}
