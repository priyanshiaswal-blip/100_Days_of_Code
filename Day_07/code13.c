//Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include <stdio.h>
int main()
{
    int year;

    //input the year
    printf("Enter the year: ");
    scanf("%d", &year);

    //calculatea and prints if year is leap year or not
    if(year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if(year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}