#include<stdio.h>
int main()
{
    char str[]= "MADAM";
    int i,j;
    for(i=0;str[i]!='\0';i++);
    i=i-1;
    for(j=0;j<i;j++,i--)
    {
        if(str[j]!=str[i])
        {
            printf("Not a Palindrome");
            break;
        }
    }
    if(j>=i)
    {
        printf("Palindrome Character");
    }
    return 0;
}