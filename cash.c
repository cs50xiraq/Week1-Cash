#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
    float n = -1;
    
    int cents=0;
    
    do
    {
        n = get_float("enter the float :");
       
    }
    while (n < 0);
   
    n = round(n * 100);
   
    printf("the round =%f\n", n);
    {
    while (n >= 25)
    {
       n = n - 25;
        cents++;
    }
    printf("the number of qoarters = %i\n", cents);
    while (n >= 10)
    {
       n = n - 10;
        cents++;
    }
    printf("the number of dimes = %i\n", cents);
    while (n >= 5)
    {
        n = n - 5;
        cents++;
    }
    printf("the number of nickels =%i\n", cents);
    while (n >= 1)
    {
        n = n - 1;
        cents++;
     
    }
    printf("the number of pennies =%i\n", cents);
    }   
}
