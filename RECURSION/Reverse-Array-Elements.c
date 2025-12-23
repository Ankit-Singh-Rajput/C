#include<stdio.h>
void reverse(int arr[],int start,int end)
{
    int temp;
    if(start>=end)
    return;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}
int main()
{
    int itr,num,arr[10];
    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    printf("Enter the Elements of the Array : ");
    for(itr=0;itr<num;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    reverse(arr,0,num-1);
    printf("The Elements in Reverse Order : ");
    for(itr=0;itr<num;itr++)
    {
        printf("%d ",arr[itr]);
    }
    return 0;
}