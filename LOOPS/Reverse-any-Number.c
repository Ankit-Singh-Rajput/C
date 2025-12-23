#include <stdio.h>
int main()
{
    int num,rem,rev = 0;  //rem=remainder  rev=reverse
    printf("Enter a number : ");
    scanf("%d",&num);
    while (num!=0)
    {
       rem=num%10;
       rev=rev*10+rem;
       num=num/10;
    }
    printf("The Reverse is : %d",rev);
    return 0;
}
