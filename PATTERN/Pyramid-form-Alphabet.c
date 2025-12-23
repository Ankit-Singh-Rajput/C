#include<stdio.h>
int main()
{
    int i,j,k,z=0;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
            for(k=0;k<=z;k++)
            {
                printf("%c",k+65);
            }
            z=z+2; 
            printf("\n");
    }
    return 0;
}