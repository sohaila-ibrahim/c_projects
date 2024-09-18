//Display all prime number between a given rang using function
#include <stdio.h>
//function decleration
int isPrime(int num);
void printprimes(int lower ,int upper);
int main()
{
  int lower , upper;
  printf("Enter the lower and upper to list primes :");
  scanf("%d%d", & lower ,& upper);
  //calling function to print all primes between the given range.
  printprimes(lower , upper);
  return 0;
}
// print  all prime number between lower and upper.
void printprimes(int lower ,int upper)
{
    printf("list of prime numbers between %d to %d  are :",lower , upper);
    while(lower<=upper)
    {
        //printing if current number is prime.
        if (isPrime(lower))
        {
            printf("%d",lower);
        } 
        lower++;
    }
}
//checking whethwr  a number is prime or not.
int isPrime(int num)
{
    int i;
    for(i=2; i<=num/2;i++)
    {
        //if the number is divisible by any number other than 1 and self then it is not prime 
        if(num % i ==0)
        {
            return 0;
        }
    }
    return 1;
}