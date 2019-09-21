# Week1-Cash
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        // this step for inter postive number and reject a negtive number
        dollar = get_float("inter the money: ");
    }
    while (dollar < 0);
      
    // to convert from dollars to cents
    int cent = round(dollar * 100);
    // a count for number of coins that used
    int c = 0 ;
    int q = 25, dim = 10, nickel = 5, pen = 1;
  
    // start searching for coins from the higher to lower
    while (cent >= q)
    {
        cent = cent - q;
        c++;
    }
    while (cent >= dim)
    {
        cent = cent - dim;
        c++;
    }
    while (cent >= nickel) 
    {
        cent = cent - nickel;
        c++;
    }
    while (cent >= pen)
    {
        cent = cent - pen;
        c++;
    }
    printf("result= %i\n", c);
}

