//Write a program to calculate library fine based on late days as follows:


#include <stdio.h>
int main()
{
    int late_days;
    float fine;

    //input the late days
    printf("Enter the number of days the book is late: ");
    scanf("%d", &late_days);

    //calculates and prints the output

    if(late_days <= 0){
        printf("Book returned on time 'NO FINE'.");
    } //day 0

    else if(late_days <=5){
        fine = late_days * 2;
        printf("Fine: %.2f rupees", fine);
    } //from days 1 to 5

    else if(late_days <=10){
        fine = 5 * 2 + (late_days - 5) * 4;
        printf("Fine: %.2f rupees", fine);
    } //from days 6 to 10
    
    else if(late_days <=30){
        fine = (5 *2 +(10 - 5) * 4) + (late_days - 10) * 6;
        printf("Fine: %.2f rupees", fine);
    } //from days 11 to 30

    else{
        printf("Membership Cancelled.");
    } //more than 30 days

    return 0;
}