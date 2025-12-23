#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter any Number : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("The Given Numbe is Prime Number");
    else
    printf("The Given Number is not a Prime Number");
    return 0;
}