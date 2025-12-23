#include<stdio.h>
int sum(int num)
{
    if(num==0)
        return 0; 
    else    
        return num%10+sum(num/10);
}
int main()
{
    int num;
    printf("Enter a Digit : ");
    scanf("%d",&num);
    printf("Sum of Digits of %d is %d",num,sum(num));
    return 0;
}