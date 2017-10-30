#include <stdio.h>
#include <cs50.h>

int main(void) {

    int height; //variable for user input height

    int i,j,k; //where i is the row and j is col1, k is col2

//prompt user for valid input(0-23 are valid inputs) with get_int
do
{
    printf("Please select a Pyramid Height between (0-23)");
        height = get_int(); //get user input for print pattern height

}

while (height < 0 || height > 23)
;
{
    int width = height-1;

    for (i = 1; i <= height; i++)  //print the rows
    {

     for(j = 1; j <= width; j++) { //space the columns
            printf(" ");
        }
        width--;
        for (k = 1; k <= i+1; k++) //print the hash loop +1 adds double in first row
        {
            printf("#");
        }

        printf("\n"); //new line
    }

    }//close while loop

}//close int main

//max height = user input

//pyramid base width = max height + 1

//next row is pyramid base width - 1 - stop laying blocks when reach 1 hashblock

//draw the half pyramid