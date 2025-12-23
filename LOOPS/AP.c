#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int a = 4;  // if a = 1
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + 3;  // then a = a + 2
    }
    return 0;
}