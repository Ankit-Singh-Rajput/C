#include<stdio.h>
int main()
{
    int arr[10],i,j,k,size,temp;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(k=0;k<size;k++)
     {
        temp=arr[k];
        j=k-1;
        while((temp<arr[j]) && (j>=0))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
     }
    printf("Insertion Sorted Elements in Ascending Order : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    return 0;
}