#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    printf("\n");
    
    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    
    if(d==0)        // %0.2f is used to print the float value upto 2 decimal places
    {
        printf("Roots are real and equal\n");
        printf("r1= %0.2f and r2 = %0.2f",r1,r2); 
    }
    else if(d>0)
    {
        printf("Roots are real and unequal \n");
        printf("r1= %0.2f and r2 = %0.2f",r1,r2);
    }
    else
    {
        printf("Roots are Imaginary");
    }
   return 0;
}
