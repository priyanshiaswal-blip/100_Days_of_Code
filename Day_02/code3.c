//Q3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
//input 1:- 5  10
//output 1:- area=50,  perimeter=30

//input 2:- 3  7
//output 2:-  area=21,  perimeter=20


#include <stdio.h>
int main(){
    float length, breadth,area, perimeter;
    
    //input the value of length and breadth
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f\n%f", &length, &breadth);

    //calculate area and breadth of rectangle
    area = length * breadth;
    perimeter = 2*(length + breadth);

    //displays the result
    printf("area = %.0f\n",area);
    printf("perimeter = %.0f\n", perimeter);
       
    return 0;


}
