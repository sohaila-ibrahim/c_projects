//write a c program to input a number and check whether number is even or odd using conditionl /ternary operator
#include <stdio.h>
int main()
{
   int num ;
   printf("Enter any  umber to check the number is even or odd :");
   scanf("%d",&num);
   switch(num %2)
   {
       //if n%2==0
       case 0:
           printf("Number is even");
           break ;
           //else n%2==1
        case 1:
            printf("Number is odd");
            break;   
   }
   return 0;
}