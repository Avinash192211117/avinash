#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float maths,phy,chem;
};
int main()
{
	struct student st;
	int n,i;
	float per;
	printf("Enter student rollno:");
	scanf("%d",&st.rollno);
	printf("Enter student name :");
	scanf("%s",&st.name);
	printf("Enter student mark :");
	scanf("%f%f%f",&st.maths,&st.phy,&st.chem);
	per=(st.maths+st.phy+st.chem)/3;
	printf("OUTPUT.......\n");
	printf("Roll No :%d\nName :%s\nMaths :%0.0f\nPhy :%0.0f\nChem :%0.0f\npercentage of marks :%0.2f",st.rollno,st.name,st.phy,st.chem,st.maths,per);
}
