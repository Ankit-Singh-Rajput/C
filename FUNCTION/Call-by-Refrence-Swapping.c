#include<stdio.h>
void swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main()
{
  int num1,num2;
  printf("Enter the value of num1 : ");
  scanf("%d",&num1);
  printf("Enter the value of num2 : ");
  scanf("%d",&num2);
  printf("Before Swapping : num1=%d and num2=%d\n",num1,num2);
  swap(&num1,&num2);
  printf("After Swapping : num1=%d and num2=%d\n",num1,num2);
  return 0;
}
 