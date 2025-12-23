#include<stdio.h>
#include<math.h>
int main()
{
    int num,root;
    printf("Enter a Number : ");
    scanf("%d",&num);

    root = sqrt(num);
    printf("The Square Root of %d is : %d\n",num,root);
    return 0;
}