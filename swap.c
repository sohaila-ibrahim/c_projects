  #include <stdio.h>
int main()
{
    int x=3, y=2;
    int temp =x;
    x = y;
    y = temp;
 
    printf(" x = %d    y = %d", x, y);
    return 0;
}