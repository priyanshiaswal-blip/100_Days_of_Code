//Write a program to input three numbers and find the largest among them using if-else.


#include <stdio.h>
int main()
{
    int num1, num2, num3;
    
    //input the value of three number
    printf("Enter the three number: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //calculates and prints the output 
    if(num1>=num2 && num1>=num3)
    {
        printf("Largest is %d.", num1);
    }

    else if(num2>=num1 && num2>=num3)
    {
        printf("Largest is %d.", num2);
    }

    else
    {
        printf("Largest is %d.", num3);
    }

    return 0;
}