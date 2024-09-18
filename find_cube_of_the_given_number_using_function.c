/* write a c programm to input any number from user and find cube of the given number using function*/
#include<stdio.h>
/*function declaration*/
double cube(double num);
int main()
{
int num;
double c;
/*input number to find cube from user*/
printf("Enter any number:");
scanf("%d",&num);
c =cube(num);
printf("cube of %d is %.2f",num,c);
return 0;
}
/*function to find cube of any number */
double cube(double num)
{
    return (num * num * num);
}