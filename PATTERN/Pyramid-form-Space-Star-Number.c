#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");       
        }                                                            
          for(k=1;k<=i;k++)   
        {                           // To Print *  * *  * * *  * * * *  * * * * *  in this pattern
            printf("%d ",k);        // then we have to Replace printf("%d ",k); by printf("* ");
        }
        printf("\n");
    }
    return 0;   
}