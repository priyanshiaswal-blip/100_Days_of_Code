//Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.


#include <stdio.h>
int main()
{
    int n;
    
    //input the value of number 
    printf("Enter the number: ");
    scanf("%d", &n);

    //calculates which number is positive,negative or zero and show results.
    if(n>0)
    {
        printf("%d is positive.", n);
    }

    else{
        if(n<0)
        {
            printf("%d is negative.", n);
        }

        else
        {
            printf("%d is zero.", n);
        }
    }
    return 0;
}