#include<stdio.h>
int fact(int);
void main()
{
    int num,factorial;
    printf("Enter a number : ");
    scanf("%d",&num);
    factorial=fact(num);
    printf("The Factorial of %d is = %d\n",num,factorial);
}
  int fact(int num)
  {
    int i,fact=1;
    for(i=1;i<=num;i++)
    fact=fact*i;
    return fact;
  }
