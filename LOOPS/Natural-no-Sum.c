#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    sum=(n*(n+1))/2;
    printf("The Sum is : %d\n",sum);
    break;
    }
    return 0;
}