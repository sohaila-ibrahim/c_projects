//Write a C program to input number of days from user and convert it to years, weeks and days.
#include<stdio.h>
int main()
{
int NoofDays ,days,years,week;
printf("Enter NoofDays:\n");
scanf("%d",& NoofDays);
 years =( NoofDays /365);
week =( NoofDays %365) /7 ;
days =(NoofDays %365) %7 ;
printf("years =%d \n",years);
printf("week =%d\n",week);
printf("days =%d",days);
}