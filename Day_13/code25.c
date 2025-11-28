//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include <stdio.h>
int main ()
{
    int num1, num2, result;
    char operator;

    printf("Enter the two number: ");//input from user
    scanf("%d %d", &num1, &num2);

    printf("Enter the operator: ");//input the operator 
    scanf(" %c", &operator);

    switch(operator) //calculates and prints the output 
    {
        case '+':
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
        break;
        
        case '-':
        result = num1 - num2;
        printf("%d - %d = %d", num1, num2, result);
        break;
        
        case '*':
        result = num1 * num2;
        printf("%d * %d = %d", num1, num2, result);
        break;

        case '/':
        if( num2 != 0 ){
        result = num1 / num2;
        printf("%d / %d = %d", num1, num2, result);
        }
        else{
            printf("Can't divide by 0.");
        }

        case '%':
        if( num2 != 0 ){
        result = num1 % num2;
        printf("%d %% %d = %d", num1, num2, result);
        }
        else{
            printf("Can't divide by 0.");
        }

    }

    return 0;
}