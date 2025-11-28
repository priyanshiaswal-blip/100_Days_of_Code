//Write a program to print the sum of the first n odd numbers.


#include <stdio.h>
int main()  
{
    int n, i, sum = 0;

    //input the n odd number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //calculates the result
    for(i = 1; i <= n; i++)
    {
        sum += (2 * i - 1);
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum); //print the result
    return 0;
}