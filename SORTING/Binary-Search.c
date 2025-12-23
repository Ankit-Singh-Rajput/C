#include<stdio.h>
int main()
{
    int arr[10],size,element,i,low,high,mid;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to be Searched : ");
    scanf("%d",&element);
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            printf("Element found at position %d",mid+1);
            break;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(low>high)
    {
        printf("Element not found");
    }
    return 0;
}