// Write a C program to input two numbers and perform all arithmetic operations. How to perform all arithmetic operation between two numbers in C programming. C program to find sum, difference, product, quotient and modulus of two given numbers.
#include <stdio.h>
int main()
{
    int num1,num2;
    int sum ,sub ,mult ,mod ;
    float div;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the secand number:");
    scanf("%d",&num2);
    sum =num1 + num2;
    sub =num1 - num2;
    mult =num1 * num2;
    div = (float ) num1 / num2;
    mod = num1 % num2;
    printf("SUM =%d \n",sum);
    printf("DIVERSION =%d \n",sub);
    printf("PRODUCT =%d \n",mult);
    printf("QUOTIENT =%f \n",div);
    printf("MODULus =%d ",mod);
   return 0;
}