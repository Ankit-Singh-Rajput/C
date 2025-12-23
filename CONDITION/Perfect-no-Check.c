// Perfect Number --> A number is called perfect number if the sum of its positive divisors
//                    excluding the number itself is equal to the number.
// Ex- 6 = 1+2+3 = 6          (1,2,3 are the positive divisors of 6)
// Ex- 28 = 1+2+4+7+14 = 28   (1,2,4,7,14 are the positive divisors of 28)


#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter any Number : ");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("%d is a Perfect Number",num);
    }
    else
    {
        printf("%d is not a Perfect Number",num);
    }
    return 0;
}
