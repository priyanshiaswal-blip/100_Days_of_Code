//Write a program to swap two numbers using a third variable
//input 1:- 3  5
//output 1:- after swap: 5  3

//input 2:- -1  1
//output 2:- after swap: 1  -1


#include <stdio.h>
int main()
{
    int num1, num2, num3;

    //input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    //calcuates the swapping using a third variable
    num3 = num1 + num2;
    num1 = num3 - num1;
    num2 = num3 - num2;

    //display the output
    printf("After swap, the number are = %d %d ", num1, num2);
    
    return 0;
}