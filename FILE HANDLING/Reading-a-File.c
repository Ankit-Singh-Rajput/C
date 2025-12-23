#include<stdio.h>
int main()
{
  FILE *ptr = fopen("Ankit-Read.txt","r"); // r is used to read a text file.
  char ch[100];
 
  while (fgets(ch,100,ptr)!=NULL)
  printf("%s",ch);
  fclose(ptr);
}

// Agar Hmlog While ke jagah if use krenge to sirf 1st Single Line hi Print Krega.
