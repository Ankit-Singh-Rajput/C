#include<stdio.h>
int main()
{
    int cp,sp,amt; //cp : cost price & sp : selling price
    printf("Enter cost price : ");
    scanf("%d",&cp);
    printf("Enter selling price : ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        amt = sp - cp;
        printf("Profit is : %d",amt);
    }
    if(cp>sp)
    {
        amt = cp - sp;
        printf("Loss is : %d",amt);
    }
    if(cp==sp)
    {
        printf("No Profit & No Loss");
    }
    return 0;
}

