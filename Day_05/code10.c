//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
//input 1:- 3661
//output 1:- 1:1:1

//input 2:- 7322
//output 2:- 2:2:2


#include <stdio.h>
int main()
{
    int total_seconds, remaining_seconds, hours, minutes, seconds;

    //
    printf("Enter the time (in seconds): ");
    scanf("%d", &total_seconds);

    //
    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    //
    printf("hours:minutes:seconds = %d:%d:%d", hours, minutes, seconds);

    return 0;
}