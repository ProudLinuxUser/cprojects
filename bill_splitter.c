#include <stdio.h>
#include <cs50.h>

int main(void)
{
        printf("Welcome to bill splitter\n");

        //Getting input from user
        int amount = get_int("Bill amount?|$| ");
        int people = get_int("Number of people? ");
        int tip = get_int("Tip? |%%| ");

        //Calculating
        int overallcash = amount * tip / 100;
        int overall_price = amount + overallcash;
        int split = overall_price / people;

        //Printing out the bill
        printf("Total Bill:|%i|$\n",overall_price);
        printf("Each person pays:|%i|$",split);
}
