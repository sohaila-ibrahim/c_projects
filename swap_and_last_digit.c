// write a c program to input a number from user and swap first and last digit of the given number
# include <stdio.h>
#include <math.h>
int main()
{
int num ,swappedNum;
int firstDigit,lastDigit,digits;
printf("Enter any number;");
scanf("%d",&num);
lastDigit = num % 10;
digits = (int)log10(num);
firstDigit =(int)(num /pow(10,digits));
swappedNum =lastDigit ;
swappedNum *=(int)round(pow(10,digits));
swappedNum +=num % ((int)round((pow(10,digits)));
swappedNum -=lastDigit;
swappedNum +=firstDigit;
printf("original number =%d" ,num);
printf("number after swapping first and lst digit :%d",swappedNum);

}