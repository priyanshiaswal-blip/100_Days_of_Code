//Write a program to input an integer and check whether it is even or odd using if-else.


#include <stdio.h>
int main()
{
    int n;
    
    //input the number
    printf("Enter the number: ");
    scanf("%d",&n);
    
    //calculates the which number is odd or even and give output
    if (n % 2 == 0){
        printf("%d is even.\n", n);
    }

    else{
    printf("%d is odd.", n);
    }

    return 0;
}