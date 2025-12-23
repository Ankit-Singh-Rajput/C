#include<stdio.h>
void tower(int num,char start,char middle,char end)
{
    if(num==0)
    {
    return;
    }  
    tower(num-1,start,end,middle);
    printf("%c to %c\n",start,end);
    tower(num-1,middle,start,end);
}
int main()
{
    int num;
    printf("Enter the number of disks : ");
    scanf("%d",&num);
    tower(num,'A','B','C');    // Let A,B,C are start, middle and end
    return 0;
}
