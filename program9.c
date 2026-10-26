#include <stdio.h>
struct Student
{
char name[10];
int roll;
};
void show(struct Student st);
int main()
{
   struct Student std;
   printf("\n enter Student record:\n");
   printf("\n Student name:\t");
scanf("%s",std.name);
printf("\nenter Student rollno.:\t");
scanf("%d",&std.roll);
show(std);
return 0;
}
void show(struct Student st)
{
printf("\nstudent name is %s", st.name);
printf("\nroll is %d",st.roll);
}

