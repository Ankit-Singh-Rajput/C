#include<stdio.h>
void sum(int num,int add)
{
    if(num==0)  // we can take any number in place of (10) Ex- if(num==21) or if(num==51)
    {
        printf("Sum is: %d",add);
    } 
    sum(num-1,add+num);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum(num,0); 
    return 0;
}
