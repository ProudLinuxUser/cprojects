#include <stdio.h>
#include <cs50.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void startsess(int p, int b);

int main(void)
{
        srand(time(NULL));
        printf("Enter to dice roller (10-20)|\n");
        for (int i = 3; i >= 0; i--)
        {
        string askusr = get_string("Enter 'start' to play| ");
        printf("------------------------------|\n");
        if (strcmp(askusr,"start") == 0)
        {
                int playerDICE = rand() % (20 - 10 + 1) + 10;
                int botDICE = rand() % (20 - 10 + 1) + 10;

                startsess(playerDICE,botDICE);
        }
        else
        {
                system("clear");
                printf("Wrong option,Try again! %i Attempts left\n",i);
                sleep(1);
        }
        }
}

void startsess(int p,int b)
{
        printf("|The usr rolled the number|%i |\n",p);
        printf("|-----------------------------|\n");
        printf("|The bot rolled the number|%i |\n",b);
        printf("|-----------------------------|\n");

        if (p > b)
        {
                printf("User won!\n");
        }
        else if (b > p)
        {
                printf("Bot won!\n");
        }
        else
        {
                printf("Its a tie!\n");
        }
        exit(1);
}
