#include<stdio.h>
int main()
{
    int num1,num2;
    char ch;
    printf("Enter the Operator : ");
    scanf("%c",&ch);
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);

    switch(ch)
    {
        case '+':
        printf("Sum of %d and %d is %d\n",num1,num2,num1+num2);
        break;

        case '-':
        printf("Difference of %d and %d is %d\n",num1,num2,num1-num2);
        break;

        case '*':
        printf("Product of %d and %d is %d\n",num1,num2,num1*num2);
        break;

        case '/':
        printf("Division of %d and %d is %d\n",num1,num2,num1/num2);
        break;

        default:
        printf("Invalid Operator\n");
    }
    return 0;
}