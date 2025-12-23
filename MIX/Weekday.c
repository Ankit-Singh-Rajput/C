#include<stdio.h>
int main()
{
    int Weekday;
    printf("Enter the Weekday Number : ");
    scanf("%d",&Weekday);
    switch(Weekday)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
        printf("Tuesday\n");
        break;

        case 3:
        printf("Wednesday\n");
        break;

        case 4:
        printf("Thursday\n");
        break;

        case 5:
        printf("Friday\n");
        break;

        case 6:
        printf("Saturday\n");
        break;
        
        printf("Sunday\n");
        break;
        
        default:
        printf("Invalid Weekday Number\n");
    }
    return 0;
}