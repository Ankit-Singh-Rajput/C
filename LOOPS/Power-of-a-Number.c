#include<stdio.h>
int main()
{
    int i,a,b,power=1; 
    printf("Enter Base : ");
    scanf("%d",&a);
     printf("Enter Power : ");
    scanf("%d",&b);

    for (i=1;i<=b;i++)
    {
        power=power*a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
    
   
    return 0;
}