#include <stdio.h>
int main() 
{
    int m1[3][3], m2[3][3], res[3][3];
    int row,col,itr;

    // Taking input for the first matrix
    
    printf("Enter elements of the 1st 3x3 matrix:\n");
    for (row = 0; row < 3; row++) 
    {
        for (col = 0; col < 3; col++)
        {
           scanf("%d", &m1[row][col]);
        }
    }

    // Taking input for the second matrix

    printf("Enter elements of the 2nd 3x3 matrix:\n");
    for (row = 0; row < 3; row++) 
    {
        for (col = 0; col < 3; col++) 
        {
           scanf("%d", &m2[row][col]);
        }
    }

    // Multiplying the matrices and printing the result

    printf("Resultant matrix after Multiplication:\n");
    for (row = 0; row < 3; row++) 
    {
        for (col = 0; col < 3; col++)             
        {
            res[row][col] = 0;                                 // If We do not want to write res[row][col] = 0; here then we have to write res[3][3] = {0}
            for (itr = 0; itr < 3; itr++)                      // in the declaration of res[3][3] array.
            {
                res[row][col] += m1[row][itr] * m2[itr][col];
            }
            printf("%d ", res[row][col]);
        }
        printf("\n");
    }
    return 0;
}