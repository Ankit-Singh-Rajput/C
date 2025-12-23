#include<stdio.h>
int main()
{
    int arr[10],size,element,i;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to be Searched : ");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("Element found at position %d",i+1);
            break;
        }
    }
    if(i==size)
    {
        printf("Element not found");
    }
    return 0;
}