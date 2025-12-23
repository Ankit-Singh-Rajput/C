#include<stdio.h>
#include<string.h>
struct EMPLOYEE
{
  int id;
  char name[20];
  float salary;
};
int main()
{
    struct EMPLOYEE Ankit={5050,"Ankit Singh",50000.95};
    struct EMPLOYEE *ptr =&Ankit;
    printf("Id : %d\n",(*ptr).id);
    printf("Name : %s\n",ptr->name);
    printf("Salary : %f",(*ptr).salary);
    return 0;
}

