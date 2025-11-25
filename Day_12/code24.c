//Write a program to calculate electricity bill based on units consumed with these rates:

#include <stdio.h>
int main()
{
    int units, electricity_bill;

    //input the units consumed
    printf("Enter the units consumed: ");
    scanf("%d", &units);

    //calculates an prints the output
    
    if(units <= 100){
        electricity_bill = 100 * 5;
        printf("Bill: %d rupees", electricity_bill);
    } //units 0 to 100
    
    else if(units <= 200){
        electricity_bill = 100 * 5 + (units - 100) * 7;
        printf("Bill: %d rupees", electricity_bill);
    } //units 100 to 200

    else if(units <= 300){
        electricity_bill = 100 * 5 + (200 - 100) * 7 + (units - 200) * 10;
        printf("Bill: %d rupees", electricity_bill);
    } //units 200 to 300
    
    else if(units >= 300){
        electricity_bill = 100 * 5 + (200 - 100) * 7 + (300 - 200) * 10 + (units - 300) * 12;
        printf("Bill: %d rupees", electricity_bill);
    } //units above 300

    return 0;
}