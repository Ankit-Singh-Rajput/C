// Factorial of a Given Number                 // Factorial upto Given Number
                             
#include<stdio.h>                              //   #include<stdio.h>   
int main()                                     //   int main()
{                                              //  {
 int i,num,fact=1;                             //   int i,num,fact=1;
 printf("Enter a number : ");                  //   printf("Enter a number : ");
 scanf("%d",&num);                             //   scanf("%d",&num);

 for(i=1;i<=num;i++)                           //   for(i=1;i<=num;i++)
 fact=fact*i;                                  //  {
 printf("Factorial of %d is = %d\n",num,fact); //  fact=fact*i;
 return 0;                                     //  printf("Factorial of %d is = %d\n",i,fact);
}                                              //  }
                                               //   return 0;
                                               //  }