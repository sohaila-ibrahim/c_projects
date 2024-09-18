/* Write a C program to check positive, negative or zero using simple if or if
else.*/ 
#include <stdio.h>
int main()
{
int number;
printf("the input number:");
scanf("%d",&number);
if (number >0)
{
    printf("%d is positive",number);
}

else if(number <0)
{
    printf("%d is negative",number);
}
else 
{
    printf("%d is zero",number);
}

return 0;

}