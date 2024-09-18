//write code to swap of two numbers using three methods 
#include <stdio.h>
int main()
{
    // Using a Temporary Variable:
    int a = 5, b = 10, temp;

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping (using temp): a = %d, b = %d\n", a, b);
    return 0;

    //Without Using a Temporary Variable (Arithmetic method):
    int a = 5, b = 10;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);
    return 0;
    
    //Using Bitwise XOR Operator:
    int a = 5, b =10;
    a =a^b;
    b=a^b;
    a=a^b;
    printf("After swapping (using temp): a = %d, b = %d\n", a, b);
    return 0;

}