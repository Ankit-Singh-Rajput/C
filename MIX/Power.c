#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,Power;
    printf("Enter Base : ");
    scanf("%d",&num1);
    printf("Enter Power : ");   // Here, Power is also called as Exponent
    scanf("%d",&num2);

    Power = pow(num1,num2);
    printf("The Power of %d raise to %d is : %d\n",num1,num2,Power);
    return 0;
}