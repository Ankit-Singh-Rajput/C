#include<stdio.h>
int add(int num1, int num2)
{
    return num1+num2;
}
int sub(int num1, int num2)
{
    return num1-num2;
}
int multi(int num1, int num2)
{
    return num1*num2;
}
int main()
{
    int num1,num2,Sum,Sub,Mul;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
    
    Sum = add(num1,num2);
    printf("The Sum of %d and %d is : %d\n",num1,num2,Sum);

    Sub = sub(num1,num2);
    printf("The Subtraction of %d and %d is : %d\n",num1,num2,Sub);

    Mul = multi(num1,num2);
    printf("The Multiplication of %d and %d is : %d\n",num1,num2,Mul);
    return 0;
}