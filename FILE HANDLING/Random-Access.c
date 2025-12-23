#include<stdio.h>
#include<stdlib.h>
void main()
{
  int len;
  FILE *ptr = fopen("Random-Access.txt","w+"); // w+ is used to both read and write a text file.
  fputs("SPNREC ARARIA",ptr);
  fseek(ptr,8,SEEK_SET); // SEEK_SET is used to set the pointer at the beginning of the file.
  rewind(ptr); // rewind is used to set the pointer at the beginning of the file.
  fseek(ptr,0,SEEK_END); // SEEK_END is used to set the pointer at the end of the file.
  len = ftell(ptr); // ftell is used to tell the length of the file.
  printf("The length of the file is %d\n",len);
  fclose(ptr);
}