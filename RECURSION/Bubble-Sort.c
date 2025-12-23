#include<stdio.h>
void bubble(int arr[],int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[10],size;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble(arr,size);
    printf("Sorted list of Elements in Ascending Order : ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    return 0;
}