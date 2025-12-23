#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any Number : ");
    scanf("%d",&n);

    while(n>0)
    {
     i=n%10;
     if(i%2==0)  // for Sum of Odd, Replace i%2==0 by i%!=0
     {
        sum = sum+i;
     }
     n=n/10;
    }
	printf("Sum of even number in the given Digits is : %d\n",sum);
    return 0;
}