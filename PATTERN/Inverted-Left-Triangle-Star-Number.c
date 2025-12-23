#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");   
        }
        for(k=i;k<=n;k++)
        {
            printf("*");   // For Inverted Left Triangle Number Printing Replace here by printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}