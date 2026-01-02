#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <unistd.h>

void system1(void);
void opt(void);
void showl(void);
int option(void);

int atmmoney = 10;
int wallet = 10;
int n = 3;

string options[] = {
        "1,Balance",
        "2,Deposit",
        "3,Withdraw",
        "4,Exit"
    };

int main(void)
{   
    opt();
}

void opt(void)
{
    int ask;
    ask = get_int("Enter your pin\n");

    if (ask == 1234)
    {
        system1();
    }
    else
    {
        printf("Wrong pin\n");
        opt();
    }
}

void system1(void)
{ 
    system("clear");
    printf("-----------------\n");
    printf("Welcome to bank\n");
    showl();
    printf("---------------------\n");
    printf("Your ATM balace: %i$\n", atmmoney);
    printf("Your wallet balance: %i$\n",wallet);
    printf("---------------------\n");
    int ask = option();

    if (ask == 1)
    {   
        system("clear");
        printf("Your ATM balace: %i$\n", atmmoney);
        printf("Your wallet balance: %i$\n",wallet);
        sleep(3);
        system1();
    }
    else if (ask == 2)
    {   
        system("clear");
        int dep = get_int("How much money you want to deposit?\n");
        if (dep > wallet)
        {
            printf("You dont have enough money");
            sleep(3);
            system1();
        }
        else if (dep < 1)
        {
            printf("You cant deposit below 1 dollar");
            sleep(3);
            system1();
        }

        atmmoney += dep;
        wallet -= dep;

        system("clear");
        printf("Your current balance is: %i$\n",atmmoney);
        printf("Your wallet balance: %i$\n",wallet);
        sleep(3);
        system1();
    }
    else if (ask == 3)
    {
        float ask;
        ask = get_float("How much money you want to withdraw?\n");
        if (ask > atmmoney)
        {
            printf("You dont have that amount of money in your bank account\n");
            printf("Current balace:%i$\n",atmmoney);
            system1();
        }
        else
        {
            atmmoney -= ask;
            wallet += ask;
            printf("Updated ATM balance: %i$\n Current wallet Balance %i$", atmmoney, wallet);
            system1();
        }
    }
    else
    {   
        printf("Leaving");
        exit(0);
    }
}
void showl(void)
{
    for (int i = 0; i <= 3; i++)
    {
        printf("%s\n",options[i]);
    }
}

int option(void)
{   
    int ask = get_int("Option to choose?\n");
    return ask;
}
