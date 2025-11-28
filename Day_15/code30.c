//Write a program to reverse a given number.


#include <stdio.h>
int main() 
{
    int n, reversed = 0; 

    //input the positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //calculates the result
    while(n != 0) 
    {
        int digit = n % 10; //get the last digit of n
        reversed = reversed * 10 + digit; 
        n /= 10; //remove the last digit from n
    }
    
    //print the result
    printf("The reversed number is: %d\n", reversed);
    return 0;
}