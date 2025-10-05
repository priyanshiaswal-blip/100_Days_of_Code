//Write a program to swap two numbers without using a third variable
//input 1:- 10  20
//output 1:- after swap: 20  10

//input 2:- 7  14
//output 2:- after swap: 14  7


#include <stdio.h>
int main()
{
    int num1, num2;

    //input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //calcuates the swapping without using a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    //display the output
    printf("After swap, the number are = %d %d ", num1, num2);
    
    return 0;
}