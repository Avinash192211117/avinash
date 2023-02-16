#include <stdio.h>
int main()
{
int vote_age;
printf("Input the age of the candidate : ");
scanf("%d",&vote_age);
if (vote_age<18)
{
printf("you are not eligible.\n");
printf("You are allowed to vote after %d year.\n",18-vote_age);
}
else
printf("you are eligible.\n");
}
