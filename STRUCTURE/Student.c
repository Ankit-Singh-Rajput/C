#include<stdio.h>
#include<string.h>
struct Student
{
    int roll,marks[3];
    char name[20];
    //int marks[3];
}X;
int main()
{
    int Total=0;
    float Avg;
    printf("Enter Name : ");
    scanf("%s",&X.name);
    printf("Enter Roll : ");
    scanf("%d",&X.roll);
    printf("Enter 3 Subjects Marks : ");
    for (int i=0;i<3;i++)
    {
    scanf("%d",&X.marks[i]);
    Total=Total+X.marks[i];
    Avg=(float)Total/3;
    }
    printf("Name : %s\n",X.name);
    printf("Roll : %d\n",X.roll);
    printf("Total Marks : %d\n",Total);
    printf("Average : %.2f",Avg);
    return 0;
}