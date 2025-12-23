#include<stdio.h>
int main()
{                                   // For 2nd Method(i.e, Without Using 3rd Variable)        
    int num1,num2,temp;             // Remove temp variable name from here
    printf("Enter 1st Number : ");
    scanf("%d",&num1);
    printf("Enter 2nd Number : ");
    scanf("%d",&num2);
                     
    temp=num1;          // a=a+b;
    num1=num2;          // b=a-b;
    num2=temp;          // a=a-b;
    printf("After Swapping : num1=%d and num2=%d\n",num1,num2);
    return 0;
}

