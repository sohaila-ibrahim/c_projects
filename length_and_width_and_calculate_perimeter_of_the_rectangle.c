// Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle.
#include <stdio.h>
int main()
{
int length,width;
int area ;
int perimeter;
printf("Enter the length: ");
scanf("%d",&length);
printf("Enter the width: ");
scanf("%d",&width);
area = length*width;
perimeter =2*(length + width);
printf("Area of rectangular is:%d sqr.units\n",area);
printf(" perimeter of rectangular is:%d units\n",perimeter);


return 0;
}