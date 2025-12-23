#include<stdio.h>
int main()
{
  int arr[10]={0,1,2,0,3,2,1,0,3,1};
  int c1=0,c2=0,c3=0,c4=0;
  for(int i=0;i<10;i++)
{
    if(arr[i]==0)
    {
        c1++;
    }
    else if(arr[i]==1)
    {
        c2++;
    }
    else if(arr[i]==2)
    {
        c3++;
    }
    else if(arr[i]==3)
    {
        c4++;
    }
}
printf("0 is repeated %d times\n",c1);
printf("1 is repeated %d times\n",c2);
printf("2 is repeated %d times\n",c3);
printf("3 is repeated %d times\n",c4);
return 0;
}
