#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            ch=ch+j;             // Replace ch=ch+j; by ch=ch+i; for AAAAA BBBBB CCCCC DDDDD EEEEE
            printf("%c ",ch-1);
            ch='A';
        }
        printf("\n");
    }
    return 0;
}