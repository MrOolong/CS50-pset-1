#include <stdio.h>
#include <cs50.h>

int main(void)

{
   // input request
   printf("Minutes: ");

   // output = input * 12
   printf("Bottles: %i\n", get_int()*12);
}

/* Store the 1 minute bottle consumption within a variable to use in calculating any water consumption */
/*int oneMinShower = 12;*/

/* totalBottles = n * oneMinShower */