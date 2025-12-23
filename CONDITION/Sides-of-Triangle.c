#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st Side : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd Side : ");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd Side : ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
    return 0;
}