// W.A.P in C to Print all the Combinations of 1,2 and 3 using For Loop. 

#include<stdio.h>
//#include<conio.h>
int main()
{
    int i,j,k;
    printf("Total no. of Combinations of 123 :\n");
    for(i=1;i<=3;i++)
    {
      for(j=1;j<=3;j++)
      {
        for(k=1;k<=3;k++)
        {
          if(i!=j && i!=k && j!=k)
          {
            printf("%d%d%d\n",i,j,k);
          }
        }
      }
    }
  return 0;
}