//Write a program to calculate the factorial of a number.


#include <stdio.h>
int main() 
{
    int n, i; 
    long long factorial = 1; //initial value of factorial is 1

    //input the positive integer
    printf("Enter a integer: ");
    scanf("%d", &n);

    //calculate the factorial of n
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    //print the result
    printf("The factorial of %d is: %lld\n", n, factorial);
    return 0;
}
