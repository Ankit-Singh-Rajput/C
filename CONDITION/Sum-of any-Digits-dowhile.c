#include<stdio.h>
int main()
{
	int num,sum=0,d;
	printf("Enter a digit = ");
	scanf("%d",&num);
	do
	{
        d=num%10;
		sum+=d;
		num/=10;
	}
	while(num>0);
	{
	printf("Sum is = %d\n",sum);
}	
	return 0;
}
