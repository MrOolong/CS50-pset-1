#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void){

//avoid imprecision by using modulo? use math.h's round() function
//use get_float() to prompt user input
float change; //var to use for prompting user input
int coins, cents;

    printf("O hai! How much change is owed?\n");
        change = get_float();
    //printf("You're owed %f \n\n", change); //test print to see float amount


while ( change < 0)
;
{
    //convert to cents
    cents = (int) round(change * 100);

    coins = 0;

    //check quarters
    coins = coins + cents / 25;
    cents %= 25;

    //check dimes
    coins = coins + cents / 10;
    cents %= 10;

    //check nickels
    coins = coins + cents / 5;
    cents %= 5;

    //check pennies
    coins = coins + cents;

        printf("%i\n", coins);


};

}//closing brace