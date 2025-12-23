// Print no. from 1 to 100

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("Number is divisible by 3 and 5");
    }
    else
    {
        printf("Number is not divisible by 3 and 5");
    }
    return 0;
}
