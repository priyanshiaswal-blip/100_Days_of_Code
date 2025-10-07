//Q4. Write a program to calculate the area and circumference of a circle given its radius.
//input 1:- 7
//output 1:- area=153.94,  circumference=43.96

//input 2:-  3
//output 2:-  area=28.27,  circumference=18.85


#include <stdio.h>
#define pi 3.14

int main(){
    float radius,area,circumference;
    
    //input the value of radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    //calculate area and circumference
    area = pi* radius * radius;
    circumference = 2* pi * radius;

    //displays the result
    printf("area = %.2f\n",area);
    printf("circumference = %.2f\n",circumference);
       
    return 0;


}
