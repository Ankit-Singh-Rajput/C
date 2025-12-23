#include<stdio.h>
#include<errno.h>
int main()
{
  FILE *ptr = fopen("Errno.txt","r"); // r is used to read a text file.
  if(ptr==NULL)
   {
    printf("The Error no. is %d\n",errno);
    perror("The Error Message is ");
   }
    else
   {
    printf("The File is Opened\n");
    fclose(ptr);
   }
  return 0;
}