#include<stdio.h>
int count(int num)
{
  if(num==11)  // we can take any number in place of (10) Ex- if(num==21) or if(num==51)
   {
     return 1;
   }
   printf("%d ",num);
   count(num+1);
}
  int main()
{
  count(1);  // we can take any number in place of (1) Ex- count(-20) or count(10)
  return 0;
}
 