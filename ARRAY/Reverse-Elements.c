#include<stdio.h>
int main()
{
    int itr,num,arr[10];
    printf("Enter the Size of Array : ");
    scanf("%d",&num);
    printf("Enter the Elements of the Array : ");
    for(itr=0;itr<num;itr++)
    {
        scanf("%d",&arr[itr]);
    }
    printf("The Elements in Reverse Order : ");
    for(itr=num-1;itr>=0;itr--)
    {
        printf("%d ",arr[itr]);
    }
    return 0;
}