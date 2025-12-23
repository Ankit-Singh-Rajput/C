#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("number is positive");
    }
    else if(num<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is zero");
    }
    return 0;
}