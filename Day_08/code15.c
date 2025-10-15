//Write the program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit or special character.


#include <stdio.h>
int main()
{
    char ch;

    //input character
    printf("Enter the character: ");
    scanf("%c", &ch);

    //calculates and print the output
    if(ch>='A' && ch<='Z')
    {
        printf("Uppercase alphabet", ch);
    }

    else if(ch>='a' && ch<='z')
    {
        printf("Lowercase alphabet", ch);
    }

    else if(ch>='0' && ch<='9')
    {
        printf("Digit", ch);
    }

    else
    {
        printf("Special character", ch);
    }

    return 0;
}