//write a c program to input a year and cheak whether year is leap year or not using conditional?ternary operator.
# include<stdio.h>
int main()
{
  int year ;
  printf("Enter a year:");
  scanf("%d" ,&year);
  if( year % 400 ==0)
   {
       printf("\n %d is the leap year .\n" ,year);
   }
   else if (year %100 ==0)
   {
       printf("\n %d is  not the leap year .\n" ,year); 
   }
   else if (year %4 ==0)
   {
        printf("\n %d is the leap year .\n" ,year);
   }
   else 
   {
        printf("\n %d is  not the leap year .\n" ,year);
   }
   return 0;

}