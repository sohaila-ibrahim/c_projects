// Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle.
#include<stdio.h>
#define PI 3.14 //used for pi
int main()
{
    float  radius,diameter,circumference,area;
    printf("enter radius:");
    scanf("%f",&radius);
     diameter =2*radius;
    circumference =2 * PI * radius;
    area =PI * radius * radius;
    printf("Diameter = %.2f units\n",diameter);
    printf("Circumference = %.2f  units\n",circumference);
    printf("Area= %.2f sq. units",area);
    return 0;
}
