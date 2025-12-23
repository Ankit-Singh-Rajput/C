#include<stdio.h>
int main()
{
    int itr1,itr2,size,temp;
    int arr [10];
    printf("Enter the size of Array : ");
    scanf("%d",&size);
    printf("Enetr the Elements of Array : ");
    for(itr1=0;itr1<size;itr1++)
    {
        scanf("%d",&arr[itr1]);
    }
    for (itr1=0;itr1<size;itr1++)
    {
        itr2=itr1;                                 // To print the elements in descending  
        while(itr2>0 && arr[itr2-1]>arr[itr2])     // order change the sign of '>' to '<' 
        {                                          // while loop.
            temp=arr[itr2];
            arr[itr2]=arr[itr2-1];
            arr[itr2-1]=temp;
            itr2--;
        }
    }
printf("Sorted list of elements in ascending order is : ");
for(itr1=0;itr1<size;itr1++)
{
    printf("%d ", arr[itr1]);
}
   return 0;
}