#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
    
{
    // initialize the coins and the types
    float remind_in_dollar;
    int quarter = 25, dime = 10, penny = 5, cent = 1, counterq = 0, counterc = 0, counterd = 0, counterp = 0;
//check if the input remind greater than 0
    do
 
    {   
        remind_in_dollar = get_float("enter the remind for the user in =") ;
    } 
    while (remind_in_dollar <= 0);
    // conver dollar to cent
    int remind_in_cent = round(remind_in_dollar * 100);
    //loop to calculte how many coins do we used 
    while (remind_in_cent != 0)
    {

        if (remind_in_cent >= quarter)
        {  
            counterq = remind_in_cent / quarter;

            remind_in_cent = remind_in_cent % quarter;
        }
        else if (remind_in_cent >= dime)
        {   
            counterd = remind_in_cent / dime;
    
            remind_in_cent = remind_in_cent % dime;
        
        }
        else if (remind_in_cent >= penny)
        {         
            counterp = remind_in_cent / penny;

            remind_in_cent = remind_in_cent % penny;

        }
        else if (remind_in_cent >= cent)
        {         
            counterc = remind_in_cent / cent;

            remind_in_cent = remind_in_cent % cent;

        }
    }
    printf("the number of coin used %d\n",  counterq + counterd + counterp + counterc);
}
