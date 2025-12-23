// Increasing Count Number from 1 to num

#include<stdio.h>
int count(int num)
{
  if(num==0)  // we can take any number in place of (10) Ex- if(num==21) or if(num==51)
   {
     return 1;
   }
   count(num-1);
   printf("%d ",num);
}
  int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    count(num);  // we can take any number in place of (1) Ex- count(-20) or count(10)
    return 0;
}
 