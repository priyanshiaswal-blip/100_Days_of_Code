//Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root_1, root_2, real_part, imag_part;
    
    printf("Enter the a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0)
    {
        root_1 = (-b + sqrt(discriminant)) / (2*a);
        root_2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root_1);
        printf("Root 2 = %.2f\n", root_2);
    }

    else if(discriminant == 0)
    {
        root_1 = root_2 = -b/ (2*a);

        printf("Roots are real and same.\n");
        printf("Root = %.2f\n", root_1);
    }

    else{
        real_part = -b/(2*a);
        imag_part = sqrt(-discriminant)/ (2*a);

        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2f\n", real_part, imag_part);
        printf("Root 2 = %.2f + %.2f\n", real_part, imag_part);
    }

    return 0;
}