#include<stdio.h>
int bsearch(int arr[],int size,int element)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
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
    return -1;
}
int main()
{
    int arr[10],size,element;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(int itr=0;itr<size;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    printf("Enter the Element to be Searched : ");
    scanf("%d",&element);
    int result=bsearch(arr,size,element);
    if(result==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position %d",result+1);
    }
    return 0;
}