#include<stdio.h>
#include<string.h>
struct EMPLOYEE
{
   int id;
   char name[20];
   float salary;
}Ankit;
int main()
{
   // struct EMPLOYEE Ankit;
    Ankit.id=5050;
    strcpy(Ankit.name,"ANKIT SINGH RAJPUT");
    Ankit.salary=999.999;
  
    printf("id : %d\n",Ankit.id);
    printf("Name : %s\n",Ankit.name);
    printf("Salary : %f",Ankit.salary);
    return 0;
}