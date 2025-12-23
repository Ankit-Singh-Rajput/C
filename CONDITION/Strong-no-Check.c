// Strong Number --> A number is called strong number if the sum of the factorial of its
//                   individual digits is equal to the number.
// Ex- 145 = 1! + 4! + 5! = 1+24+120 = 145


#include<stdio.h>
int main()
{
    int i,num,count,rem,fact,sum=0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    count=num;
    while(num>0)
    {
        rem=num%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
      sum=sum+fact;
      num=num/10;
    }
    if(count==sum)
    {
        printf("%d is a Strong Number",count);
    }
    else
    {
        printf("%d is not a Strong Number",count);
    }
    return 0;
}