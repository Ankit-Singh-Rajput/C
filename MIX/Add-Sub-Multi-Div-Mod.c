#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi,div,mod;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    mod=a%b;
    printf("The Sum is : %d\n",sum);
    printf("The Sub is : %d\n",sub);
    printf("The Multi is : %d\n",multi);
    printf("The Div is : %d\n",div);
    printf("The Mod is : %d\n",mod);
    return 0;
}