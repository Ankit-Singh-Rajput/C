#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=i;j<=n;j++)
        {
        printf("* ",j);   // For Inverted Right Triangle Number Printing Replace here by pritf("%d ",j);
        }
        printf("\n");
    }
    return 0;
} 