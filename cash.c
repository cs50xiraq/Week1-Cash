#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main()
{
    float dollars = get_float("change owed : ");// Give the mony in dollars
    int cents = round(dollars * 100), count = 0;// save the mony in cents
    bool flag = true;
    while (flag)
    {
        if (cents > 0)
        {
            while (flag)
            {
                if ((cents / 25) >= 1)
                {
                    count++;
                    cents -= 25;
                }
                else if ((cents / 10) >= 1)
                {
                    count++;
                    cents -= 10;
                }
                else if ((cents / 5) >= 1)
                {
                    count++;
                    cents -= 5;
                }
                else if ((cents / 1) >= 1)
                {
                    count++;
                    cents -= 1;
                }
                else
                {
                    flag = false;//cents less than 1
                }
            }
        }
        else
        {
            dollars = get_float("change owed : ");// Give the mony in dollars
            cents = round(dollars * 100);// save the mony in cents
        }
    }
    printf("%i \n", count);
}
