#include<stdio.h>
int main()
{
    int r;float s;
    printf("Enter the value of r : ");
    scanf("%d",&r);
    s = 4 * 3.14 * r * r * r / 3;
    printf("The Volume of Sphere is : %f",s);
    return 0;
}