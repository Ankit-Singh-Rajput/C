#include<stdio.h>
int fibo(int num)
{
   // if(num<=1) OR if(num==0 || num==1)
   //   return num;
  if(num==0)
    return 0;
  else if(num==1)
    return 1;
  else
    return fibo(num-1)+fibo(num-2);
}
int main()
{
  int num;
  printf("Enter the number of terms : ");
  scanf("%d",&num);
  printf("Fibonacci Series : ");
  for(int i=0;i<num;i++)
  {
    printf("%d ",fibo(i));
  }
  return 0;
}