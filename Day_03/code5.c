//Q5. Write a program to convert temperature from celsius to fahrenheit.
//input 1:- 0
//output 1:- fahrenheit=32

//input 2:- 100
//output 2:- fahrenheit=212


#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    //Input the temperature in Celsius
    printf("Enter the temperature in Celsius: ");
    scanf("%.1f", &celsius);

    //calcualtes fahrenheit by converting celsius into fahrenheit 
    fahrenheit = (celsius * 9 / 5) + 32;

    //display the result
    printf("The temperature in Fahrenheit=%.0f\n", fahrenheit);

    return 0;
}

