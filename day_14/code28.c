 //Write a program to print the product of even numbers from 1 to n.


#include <stdio.h>
int main() 
{
    int n, i;
    long long product = 1;
    
    //input the integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //calculates the product of even numbers
    for(i = 2; i <= n; i += 2) 
    {
        product *= i;
    }
    
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product); //print the result
    return 0;
}