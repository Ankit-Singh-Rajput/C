#include<stdio.h>
int sum(int arr[],int num)
{
    if(num==0)
        return 0;
    else
        return arr[num-1]+sum(arr,num-1);
}
  int main()
{
    int num;
    printf("Enter the Size of the Array : ");
    scanf("%d",&num);
    printf("Enter the Elements of the Array : ");
    int arr[num];
    for(int itr=0;itr<num;itr++)
    {
      scanf("%d",&arr[itr]);
    }
    printf("Sum of Array Elements : %d",sum(arr,num));
    return 0;
}