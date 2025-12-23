#include<stdio.h>
int main()
{
    char arr[]="Ankit Singh is a Talented Boy";
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}