// Palindrome Number --> It is a number that remains the same when its digits are reversed.
// Ex- 11, 121, 12321, 123454321


#include<stdio.h>
int main()
{
    int c,n,r,palin=0;   // r is remainder
    printf("Enter a Number : ");
    scanf("%d",&n);
    c=n;

    while (n>0)
    {
        r=n%10;
        palin=r+(palin*10);
        n=n/10;
    }
    if(c==palin)
    {
    printf("Palindrome Number");
    }
    else
    printf("Not a Palindrome NUmber");
    return 0;
}