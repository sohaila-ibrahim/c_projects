//write a c program to calculate sum of digits of number
#include<stdio.h>
int main()
{
  int num,t,sum=0,remainder;
  printf("Enter an integer:\n");
  scanf("%d",&num);
  t=num;
  while(t !=0)
  {
      remainder = t %10;
      sum =sum +remainder;
      t   =t /10;
  }
  printf("sum of digots of %d =%d\n",num,sum);
  return 0;
}