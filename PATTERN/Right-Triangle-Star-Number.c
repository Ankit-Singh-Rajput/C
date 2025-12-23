#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");   // For Right Triangle Number Printing Replace here by printf("%d ",j); for 1 12 123 1234 12345 
                                                                          // OR  printf("%d ",i); for 1 22 333 4444 55555
        }
        printf("\n");
    }
    return 0;
}