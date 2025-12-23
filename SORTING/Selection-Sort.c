#include<stdio.h>
int main()
{
    int arr[10],i,j,size,temp,min,flag;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);
    printf("Enter the Elements of Array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
      min=arr[i];
      flag=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<min)
            {
               min=arr[j];
               flag=j;
            }
        }
            if(flag>i)
            {
                temp=arr[i];
                arr[i]=arr[flag];
                arr[flag]=temp;
            }
        }
    printf("Selection Sorted Elements in Ascending Order : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }   
    return 0;
}