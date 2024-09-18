//Write a C program to input temperature in Centigrade and convert to Fahrenheit
#include <stdio.h>
int main()
{
float celsius, Fahrenheit;
printf("Enter temperature in celsius =");
scanf("%f",&celsius);
Fahrenheit =(celsius *(9/5))+32;
printf("%.2f C is equal to %.2fF\n" ,celsius,Fahrenheit );
return 0;

}