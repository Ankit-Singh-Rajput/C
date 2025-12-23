#include<stdio.h>
int main()
{
    int a[3][2]={{1,2},{3,4},{5,6}};
    // 1 2
    // 3 4 
    // 5 6
    int b[2][4]={{1,2,3,4},{5,6,7,8}};
    // 1 2 3 4
    // 5 6 7 8
    int res[3][4];
    int n=2;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            res[i][j]=0;
            for(int k=0;k<n;k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }  
    printf("Multiplication of the given Matrix is : \n");                                         
    for(int i=0;i<3;i++)                            
    {                                            
        for(int j=0;j<4;j++)                     
        {                                              // OUTPUT
            printf("%d ",res[i][j]);     
        }                                           // 11 14 17 20
        printf("\n");                               // 23 30 37 44
    }                                               // 35 46 57 68
    return 0;
}