#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float dollars;
    int count = 0 ;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (!(dollars > 0)); //
    
    int cents = (int)(round(dollars * 100));
    
    while (cents >= 25)
    {
        count++;
        cents = cents - 25;
    }
    while (cents >= 10)
    {
        count++;
        cents = cents - 10;
    }
    while (cents >= 5)
    {
        count++;
        cents = cents - 5;
    }
    while (cents > 0)
    {
        cents = cents - 1;
        count++;
    }
    printf("%i\n", count);
}
