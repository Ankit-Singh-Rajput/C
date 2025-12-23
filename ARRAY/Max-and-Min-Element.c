#include <stdio.h>
int main()
{
    int itr,size,arr[10];
    printf("Enter the size of Array : ");
    scanf("%d", &size);
    printf("Enter the elements of the array : ");

    for(itr=0;itr<size;itr++)                 
     {                                                              
        scanf("%d",&arr[itr]);
     }            
      int min=arr[0],max=arr[0];
    for(itr=0;itr<size;itr++)          
     {
        if (max < arr[itr])
        {
            max = arr[itr];
        }
        if(min > arr[itr])
        {
            min = arr[itr];
        }
     }
    printf("The maximum value of the array is : %d\n", max);
    printf("The minimum value of the array is : %d", min);
    return 0;
}