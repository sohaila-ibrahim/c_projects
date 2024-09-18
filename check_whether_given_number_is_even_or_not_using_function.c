/* write a c program to input a number from user and check whether given number is even or not using function*/
#include <stdio.h>
/* 
function to check even or odd
 return 1 is num is even otherwise is o
 */
 int isEven(int num)  
 {
     return !(num & 1);
 }
 int main()
 {
   int num;
   //input number from user
   printf("Enter any number :");
   scanf("%d",&num);
   //if isEven()function return 0 then the number is even
   if(isEven(num))
   {
       printf("The number is even.");
   }
   else 
   {
         printf("The number is odd.");
   }
   return 0;

 }