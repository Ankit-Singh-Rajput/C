#include<stdio.h>
int main()
{
	int i=10,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(i>=1)
	{
		printf("%d * %d = %d\n", n, i, n*i);
		i--;
	}
	return 0;
}
