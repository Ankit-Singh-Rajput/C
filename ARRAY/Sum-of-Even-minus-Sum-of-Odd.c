#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sumEven=0,sumOdd=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sumEven=sumEven+arr[i];
        }
        else
        {
            sumOdd=sumOdd+arr[i];
        }
    }
    int res=sumEven-sumOdd;
    printf("The Difference is %d",res);
    return 0;
}