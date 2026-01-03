#include <stdio.h>
#include <cs50.h>
#include <unistd.h>
#include <stdlib.h>

void menu(void);
const float K = 273.15;
const float F = 32;

int main(void)
{
        menu();
}

void menu(void)
{
       while (true)
        {
        printf("-------------------------------------------\n");
        printf("1|Celsius to Kelvin|\n");
        printf("2|Celsius to Fahrenheit|\n");
        printf("-------------------------------------------\n");
        int ask = get_int("|Option to Select|3-quit|4-note|");
        printf("-------------------------------------------\n");

        if (ask == 1)
        {
        float entcels = get_float("Enter Celsius  ");
        float sum = K + entcels;
        printf("Celsius converted to Kelvin is |%.2f K|\n",sum);
        sleep(5);
        system("clear");
        }

        else if (ask == 2)
        {
        float entcels = get_float("Enter Celsius  ");
        float sum = F + entcels * 1.8;
        printf("Celsius converted to Fahrenheit is |%.1f F|\n",sum);
        sleep(5);
        system("clear");
        }

        else if (ask == 3)
        {
        system("clear");
        printf("Quitting Program...");
        exit(0);
        }

        else if (ask == 4)
        {
                printf("|Note-Negative Celsius values are valid|\n");
        }
        }
}
