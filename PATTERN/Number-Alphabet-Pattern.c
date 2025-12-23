#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        if(i==2 || i==4)
        {
           char ch='A';
            for(j=1;j<=i;j++)
               printf("%c ",ch++);
        }
        else
        {
            for(j=1;j<=i;j++)
               printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
