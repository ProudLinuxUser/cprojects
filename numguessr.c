#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <time.h>

int main(void)
{
        srand(time(NULL));
        int secret;
        string mode;
        int guess;
        int attempts = 0;

        printf("1|1-10\n2|1-100\n3|1-1000\n");
        int ask = get_int("Option to choose?\n");

        if (ask == 1)
        {
                secret = rand() % 10 + 1;
                mode == "1-10";
        }
        else if (ask == 2)
        {
                secret = rand() % 100 + 1;
                mode == "1-100";
        }
        else if (ask == 3)
        {
                secret = rand() % 1000 + 1;
                mode = "1-1000";
        }
        else
        {
                printf("Not an option");
                exit(1);
        }

        printf("Welcome to number guessing game %s edition\n",mode);
        do{
                guess = get_int("Enter guess  ");
                attempts += 1;

                if (guess > secret)
                {
                        printf("The number is Lower\n");
                }
                else if (guess < secret)
                {
                        printf("The number is Higher\n");
                }
                else
                {
                        printf("YOU GUESSED IT!\n");
                }
        }while (guess != secret);
                printf("It took you |%i| attempts to guess the number.\n",attempts);
}
