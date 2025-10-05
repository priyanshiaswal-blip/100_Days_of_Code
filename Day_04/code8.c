//Write a program to find and displays the sum of the first n natural numbers.
//input 1:- 5
//output 1:- sum=15

//input 2:- 10
//output 2:- sum=55


#include <stdio.h>
int main()
{
    int n,sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n*n+n) /2;

    printf("The sum of the first n natural number = %d", sum);

    return 0;
}