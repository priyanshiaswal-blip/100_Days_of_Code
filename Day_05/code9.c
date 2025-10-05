//Write a program to calculate simple and compound interest for given principal, rate and time.
//input 1:- 1000 5 2
//output 1:- Simple interest=100, Compound interest=102.5

//input 2:- 5000 7 3
//output 2:- Simple interest=1050, Compound interest=1125.76


#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, SI, CI;

    //Input the value of principal, rate and time
    printf("Enter the value of principal: ");
    scanf("%f", &principal);

    printf("Enter the value of rate: ");
    scanf("%f", &rate);
    
    printf("Enter the value of time: ");
    scanf("%f", &time);

    //calculates simple and compound interest
    SI = (principal * rate * time) / 100;
    CI = principal * pow((1 + rate / 100), time) - principal;

    //displays the output
    printf("\nSimple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f", CI);

    return 0;

}