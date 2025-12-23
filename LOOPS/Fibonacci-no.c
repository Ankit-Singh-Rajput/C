// Fibonacci Series
// Ex- 0 1 1 2 3 5 8 13 21 34  (Fibonacci Series upto 10th Term)
// 0--> 1st term, 1--> 2nd term, 1--> 3rd term, 2 --> 4th term, 3 --> 5th term

#include<stdio.h>
int main()
{
 int i, next, num, first=0, second=1;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
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
    return 0;
}