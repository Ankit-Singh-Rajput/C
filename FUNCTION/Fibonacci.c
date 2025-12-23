#include<stdio.h>
void fibo(int);
int main()
{
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    fibo(num);
}
void fibo(int num)
{
    int i, next, first=0, second=1;
    printf("Fibonacci Series of %d terms: ",num);
    for(i=0; i<num; i++)
    {
        if(i <= 1)
        next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return;
}