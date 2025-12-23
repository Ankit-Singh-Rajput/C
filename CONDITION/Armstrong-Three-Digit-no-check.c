// Armstrong Number
// Ex- 153 = 1*1*1 + 5*5*5 + 3*3*3 = 1 + 125 + 27 = 153
// Ex- 1634 = 1*1*1*1 + 6*6*6*6 + 3*3*3*3 + 4*4*4*4 = 1 + 1296 + 81 + 256 = 1634

#include<stdio.h>
int main()
{
    int count,num,r,arm=0;    // r is remainder
    printf("Enetr any Number : ");
    scanf("%d",&num);
    count=num;
while(num>0)
{
  r=num%10;
  arm=(r*r*r)+arm;  // for four digit no. checking then arm=r*r*r*r + arm;
  num=num/10;           // No. of Total Digits = Multiplication with Total r
}   
if(count==arm)
{
    printf("Armstrog Number");
}
else
    printf("Not a Armstrong Number");
    return 0;
}