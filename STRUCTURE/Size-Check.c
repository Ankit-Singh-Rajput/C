#include<stdio.h>
#include<string.h>
struct EMPLOYEE
{
  int id;        // 4 bytes
  char name[10]; // [1 to 4] = 4 bytes, [5 to 8] = 4 bytes, [9 to 12] = 4 bytes .....
  float salary;  // 4 bytes
}Ankit;
int main()
{
    printf(" Total Size of Structure : %d bytes",sizeof(Ankit));
    return 0;
}  

// Total Size = 4(float) + 4(int) + 12(char)  = 20 bytes