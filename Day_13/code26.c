//Write a program to print numbers from 1 to n.


#include <stdio.h>
int main()
{
    int n, i;

    //input the integer
    printf("Enter a integer: ");
    scanf("%d", &n);

    //print the current number
    for(i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}