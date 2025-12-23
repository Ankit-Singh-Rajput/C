#include<stdio.h>
int main()
{
  FILE *ptr = fopen("Ankit-Write.txt","w"); // w is used to create a text file.
  char ch[100] = "Hamlog Yahi Se Ek File Create kar Skte H Aur Yahi Se Us Creted File Me Likh Bhi Skte Hai";
  fputs(ch,ptr);
  fclose(ptr);
  //while (fgets(ch,100,ptr)!=NULL)
  printf("%s",ch);
  fclose(ptr);
}
