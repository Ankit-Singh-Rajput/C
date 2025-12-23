// Total no. of Fibonacci Series within a given Number

#include<stdio.h>
int main()
{
 int num,first=0,second=1,sum=0;
 printf("Enter a number : ");
 scanf("%d",&num);

 printf("Fibonacci Series : %d %d ",first,second);
 sum=first+second;

 while(sum<=num)
  {
    printf("%d ",sum);
    first=second;
    second=sum;
    sum=first+second;
  }
 return 0;
}
