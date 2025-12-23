#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    if(n%2==0)
    {
        sum = -n/2;  // n is even no. series
    }
    else
    {
      sum= -n/2+n;   // n is odd no. series
    }
    printf("The Sum is : %d",sum);
    return 0;
}