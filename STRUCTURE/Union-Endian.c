#include<stdio.h>
union Endian
{
  int num;
  char byte;
}End;
int main()
{
  End.num=1234;
  if(End.byte)
  {
    printf("Little Endian\n");
  }
  else
  {
    printf("Big Endian");
  }
  return 0;
}
