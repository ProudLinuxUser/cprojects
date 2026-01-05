#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <unistd.h>

void start(void);
void func(void);
void call(float n,string c);

float bitcoin = 0.0000107;
float monero = 0.0023;
float ethereum = 0.00032;

int main(void)
{
        start();
        func();

        return 0;
}

void start(void)
{
        string lists[] = {
        "|1|USD-Bitcoin|",
        "|2|USD-Monero|",
        "|3|USD-Ethereum|",
        };

        printf("|Welcome to USD to Crypto converter|\n");
        for (int i = 0; i < 3; i++)
        {
                printf("%s\n",lists[i]);
        }
        func();
}

void func(void)
{
        int ask = get_int("|Choose option|  ");
        printf("-------------------------\n");
        if (ask == 1)
        {
                string crypto = "|Bitcoin|";
                sleep(1);
                system("clear");
                call(bitcoin,crypto);
        }

        else if (ask == 2)
        {
                string crypto = "|Monero|";
                sleep(1);
                system("clear");
                call(monero,crypto);
        }

        else if (ask == 3)
        {
                string crypto = "|Ethereum|";
                sleep(1);
                system("clear");
                call(ethereum,crypto);
        }

        else
        {
                printf("Invalid option, Try again\n");
                sleep(3);
                system("clear");
                start();
        }
}

void call(float n,string c)
{
        float ask = get_float("|Enter USD|  ");
        float sum = ask * n;
        printf("-------------------------\n");
        printf("|You get: %.8f %s\n",sum,c);
        exit(1);
}
