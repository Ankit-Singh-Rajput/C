#include<stdio.h>
int lsearch(int arr[],int size,int element)
{
    for(int itr=0;itr<size;itr++)
    {
        if(arr[itr]==element)
        {
            return itr;
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
    int result=lsearch(arr,size,element);
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