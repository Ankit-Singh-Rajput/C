#include<stdio.h>
typedef struct 
{
    int day;
    int month;
    int year;
}Date;
Date a,b;
int main()
{
   a.day=4;
   a.month=8;
   a.year=1999;

   b.day=4;
   b.month=4;
   b.year=2000;
    
   if(a.day==b.day)
   printf("The Dates are Same");
   else
   printf("The Dates are not Same");
   printf("\n");
   if(a.month==b.month)
   printf("The Dates are Same");
   else
   printf("The Dates are not Same");
   printf("\n");
   if(a.year==b.year)
   printf("The Dates are Same");
   else
   printf("The Dates are not Same");
   return 0;
}
