#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("Enter any Number : ");
    scanf("%d",&n);
    

    for (i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
        a=1;
        break;
        }
    }
    if(n==1)
    printf("1 is neither Prime nor Composite Number");
    else if(a==0)
    printf("The Given Number is Prime Number");
    else
    printf("The Given Number is Composite Number");
    return 0;
}