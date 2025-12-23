#include<stdio.h>
int main()
{
    int arr[10],i,j,size,temp;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Bubble Sorted Elements in Ascending Order : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    return 0;
}