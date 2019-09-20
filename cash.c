#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void) 
{

    float dollars ;
    do
    { 

        dollars = get_float("Change owed :");
    
    }
    while (dollars <= 0);
    int cents = round(dollars * 100);
 
    int q = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        q++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        q++;
    }
    while (cents >= 5)
    {
        cents = cents - 5 ;
        q++;
    }
    while (cents >= 1)
    {
        cents = cents - 1 ;
        q++;
    }
  


    printf("%i", q);
        
    
        
   



 
}
