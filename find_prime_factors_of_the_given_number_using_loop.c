//write a c program to input a number from user and find prime factors of the given number using loop
# include<stdio.h>
int main()
{
 int i,j,num,isprime;
 printf("Enter any number to print prime factor:")  ;
 scanf("%d",&num)  ;
 printf("All prime factorsof %d are : \n",num);
 for(i =2;i<=num ;i++)
 {
if (num%i ==0)
     {
       isprime = 1;
       for (j=2; j<= i/2 ;j++) 
       {
           if (i%j ==0)
           {
               isprime = 0;
                break ;
           }
       }
       if (isprime ==1)
    {
        printf("%d" ,i);
    }
  } 

 }
 
return 0;

}