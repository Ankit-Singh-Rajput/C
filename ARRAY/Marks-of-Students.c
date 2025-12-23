  // Given an array of marks of 10 students,
  // if the mark of any student is less than 35
  // print its roll no.[Here roll no. is Index Number]

#include<stdio.h>
int main()
{
    int marks[10]={95,90,31,25,100,50,15,89,97,30};

    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
    {
        printf("Roll no. of student whose marks is less than 35 are : ");
        printf("%d \n",i);
    }
    }
    return 0;
}