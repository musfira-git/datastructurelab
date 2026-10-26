#include <stdio.h>
struct student
{
char name[20];
int rollno;
float marks;
};
struct student s1[3];
int main()
{
int i;
printf("enter name,rollno,and marks of three students:\n");
for(i=0;i<=2;i++)
scanf("%s %d %f",&s1[i].marks);
printf("student name\tstudent roll no\tstudent marks:");
for(i=0;i<=2;i++)
scanf("%S %d %F,&s1[i].rollno,s1[i].marks);
}
