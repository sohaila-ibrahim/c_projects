//write a c program to check whether a number is palindrome or not 
#include<stdio.h>
int main()
{
    int num,r,temp,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
      r=num %10;
      sum =(sum*10 )+r;
      num=num/10; 
    }
    if(temp==sum)
    {
         printf("palindrome number.");
    }
    else
    {
        printf("not palindrome number.");
    }
return 0;

}