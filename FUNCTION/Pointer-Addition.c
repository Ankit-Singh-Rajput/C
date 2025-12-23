#include<stdio.h>
int main()
{
    int *p,*q,sum,num1,num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    p = &num1;
    q = &num2;
    sum = *p + *q;
    printf("Sum of %d and %d is %d", *p, *q, sum);
    return 0;
}