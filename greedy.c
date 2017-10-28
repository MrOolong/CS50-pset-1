#include <stdio.h>
#include <cs50.h>

int main (void){

//use get_float() to prompt user input
float change; //var to use for prompting user input
float quarter = 0.25;
float dime = 0.10;
float nickel = 0.05;
float penny = 0.00;
int coinInt = 0;


do {
    printf("How much change is owed?\n");
        change = get_float();
    printf("You're owed %f \n\n", change);
}

while ( change >= 0.01); {

    for ()
    if(change == 0) {
    printf("Number of coins to produce change: %i \n\n", coinInt);
    //printf("%f \n",change);
    }
};

}//closing brace