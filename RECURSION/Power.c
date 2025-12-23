#include<stdio.h>
int power(int num1,int num2)
{
    if(num2==0)
    {
        return 1;
    }
    return num1*power(num1,num2-1);
}
int main()
{
    int num1,num2,Power;
    printf("Enter Base : ");
    scanf("%d",&num1);
    printf("Enter Power : ");   // Here, Power is also called as Exponent
    scanf("%d",&num2);
    Power = power(num1,num2);
    printf("The Power of %d raise to %d is : %d\n",num1,num2,Power);
    return 0;
}
