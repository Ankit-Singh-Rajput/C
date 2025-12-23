#include<stdio.h>
int main()
{
    char i,j,count='A';
    for(i='A';i<='E';i++)              // To Print A BB CCC DDDD EEEEE 
    {                                  // We have to remove count='A' and replace printf("%d ",count++); by printf("%c ",i);  
        for(j='A';j<=i;j++)
        {
            printf("%c ",count++);       // To Print A AB ABC ABCD ABCDE 
        }                                // We have to remove count='A' and replace printf("%d ",count++); by printf("%c ",j);          }
        printf("\n");
    }
    return 0;
}
