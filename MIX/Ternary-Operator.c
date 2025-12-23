#include<stdio.h>
int main()
{
    int num1,num2,Max;
 // int num3;
    printf("Enter 1st Number : ");
    scanf("%d",&num1);

    printf("Enter 2nd Number : ");
    scanf("%d",&num2);

 // printf("Enter 3rd Number : ");
 // scanf("%d",&num3);  

    Max=(num1>num2)?(num1):(num2);   
    printf("Maximum Number between %d and %d is %d\n",num1,num2,Max);

 // Max=(num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
 // printf("Maximum Number among %d, %d and %d is %d\n",num1,num2,num3,Max);
 
    return 0;
}