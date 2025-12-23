#include<stdio.h>
void Multi(int m1[2][2], int m2[2][2]);
void main()
 {
    int row, col, m1[2][2], m2[2][2];
    printf("Enter the elements of 1st 2x2 matrix:\n");
    for (row = 0; row < 2; row++) 
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d", &m1[row][col]);
        }
    }

    printf("Enter the elements of 2nd 2x2 matrix:\n");
    for (row = 0; row < 2; row++) 
    {
        for (col = 0; col < 2; col++)
        {
            scanf("%d", &m2[row][col]);
        }
    }
    Multi(m1, m2);
}

void Multi(int m1[2][2], int m2[2][2])

{
    int row, col, itr, res[2][2] = {0};
    printf("Resultant matrix after Multiplication:\n");
    for (row = 0; row < 2; row++) 
    {
        for (col = 0; col < 2; col++)
         {
            for (itr = 0; itr < 2; itr++)
             {
                res[row][col] += m1[row][itr] * m2[itr][col];
            }
            printf("%d ", res[row][col]);
        }
        printf("\n");
    }
}
