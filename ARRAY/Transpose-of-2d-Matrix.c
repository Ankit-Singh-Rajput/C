#include<stdio.h>
int main()
{
    int trans[2][2],arr[2][2];
    printf("Enter the elements of the matrix : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           trans[j][i]=arr[i][j];
        }
    }
    printf("Transpose Elements of the matrix is : \n");
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           printf("%d ",trans[i][j]);
        }
        printf("\n");
        }
    return 0;
}