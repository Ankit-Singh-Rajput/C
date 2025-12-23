#include<stdio.h>
int main()
{
    int sum=0,sub=0,multi=1,arr[5];
    printf("Enter 5 elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        sub=sub-arr[i];
        multi=multi*arr[i];
    }
    printf("Sum is : %d \n",sum);
    printf("Sub is : %d \n",sub);
    printf("Multi is : %d ",multi);
    return 0;
}

