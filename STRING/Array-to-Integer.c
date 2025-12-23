// To convert a string to an integer("12345" --> 12345), we use the atoi() function.
// The atoi() function takes a string as an argument and returns its value as an integer.
// The atoi() function is defined in the stdlib.h header file.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char str[]="1234";
  int num=0;
  printf("Enter a string : ");
  scanf("%s",str);
  num=atoi(str);
  printf("The integer is : %d",num);
  return 0;
}

