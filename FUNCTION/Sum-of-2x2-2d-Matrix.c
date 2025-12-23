#include<stdio.h>
void sum(int [2][2], int [2][2]);
void main()
{
    int a[2][2], b[2][2], i, j;
    printf("Enter the elements of 1st 2x2 matrix: ");
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    scanf("%d", &a[i][j]);
    printf("Enter the elements of 2nd 2x2 matrix: ");
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    scanf("%d", &b[i][j]);
    sum(a, b);
}
void sum(int a[2][2], int b[2][2])
{
    int i, j, c[2][2];
    for(i=0; i<2; i++)
    for(j=0; j<2; j++)
    c[i][j] = a[i][j] + b[i][j];
    printf("The sum of 2x2 matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        printf("%d ", c[i][j]);
        printf("\n");
    }
}