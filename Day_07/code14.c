//Write a program to input a character and check whether it is a vowel or consonant using if-else.


#include <stdio.h>
int main()
{
    char ch;

    //input the value of character
    printf("Enter the character: ");
    scanf("%c", &ch);

    //calculates and prints output
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is a vowel.",ch);
    }
    else
    {
        printf("%c is a consonant.",ch);
    }

    return 0;
}