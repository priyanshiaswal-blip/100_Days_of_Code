//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include <stdio.h>
int main()
{
    int a, b, c;

    //input the values of side lengths of the triangle
    printf("Enter the lengths: ");
    scanf("%d %d %d", &a, &b, &c);

    // calculates and displays the result
    if(a==b && b==c && a==c)
    {
        printf("Triangle is Equilateral.", a,b,c);
    }
    
    else if(a==b || b==c || a==c)
    {
        printf("Triangle is Isosceles.", a,b,c);
    }
    
    else
    {
        printf("Triangle is Scalene.", a,b,c);
    }

    return 0;

}