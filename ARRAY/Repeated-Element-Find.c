#include<stdio.h>
int main()
{
    int arr[10]={1,2,4,5,7,3,8,5,9,3};
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
      {
         if(arr[i]==arr[j])
         {
            printf("%d is the Repeated Element\n",arr[i]);
         }
      }
    }
    return 0;
}
