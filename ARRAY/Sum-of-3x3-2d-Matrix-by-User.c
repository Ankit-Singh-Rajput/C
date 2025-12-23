#include <stdio.h>
int main()
{
    int row, col, s1[3][3], s2[3][3], sum[3][3];
    printf("Enter the elements of 1st 3x3 matrix :\n ");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d",&s1[row][col]);
        }
    }
    printf("Enter the elements of 2nd 3x3 matrix :\n ");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d",&s2[row][col]);
        }
    }
    printf("The Sum of 3x3 2d matrix is : \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            sum[row][col] = s1[row][col] + s2[row][col];
            printf("%d ",sum[row][col]);
        }
        printf("\n");
    }
    return 0;
}