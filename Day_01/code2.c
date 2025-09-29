//Q2. Write a program to input two numbers and display their sum,difference, product and quotient.
//input 1:-  10  2
//output 1:-  sum=12, diff=8, product=20, quotient=5

//input 2:- 7  3
//output 2:- sum=10, diff=4, product=21, quotient=2


#include <stdio.h>
int main(){
    int a,b,addition, subtraction, multiplication, divison;

    //input the integers
    printf("\n enter the first integer : ");
    scanf("%d", &a);
    printf("\n enter the second integer : ");
    scanf("%d", &b);

    //performs calculatons
    addition =a+b;
    subtraction= a-b;
    multiplication= a*b;
    divison= a/b;
    
    //displays the result
    printf("addition = %d\n",addition);
    printf("subtraction = %d\n",subtraction);
    printf("multiplication = %d\n",multiplication);
    printf("divison = %d\n",divison);

    return 0;

}