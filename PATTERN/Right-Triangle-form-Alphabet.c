#include<stdio.h>
int main()
{
    int i,j;

    for(i='A';i<='E';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",i);   // Replace printf("%d ",i); by printf("%d ",j); for A AB ABC ABCD ABCDE
        }
        printf("\n");
    }
    return 0;
}