#include<stdio.h>
int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,r,ncr,npr;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("The value of %dC%d is : %d",n,r,ncr);

    npr=factorial(n)/factorial(n-r);
    printf("\nThe value of %dP%d is : %d",n,r,npr);
    return 0;
}
