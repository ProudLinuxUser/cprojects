#include <stdio.h>
#include <stdlib.h> 
#include <cs50.h>

// importing functions
void add();
void subtract();
void multiply();
void divide();

int main(void)
{   
while (true)
{
//Made a list cuz im fancy
    string options[4] = {
        "1|Add",
        "2|Subtract",
        "3|Multiply",
        "4|Divide"
    };
//Menu
    printf("Welcome to calculator!\n");
    printf("Select option\n");
    printf("---------------\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",options[i]);
    }
//User input option handling
    int ask = get_int("Which one to choose?\n");
    
    if (ask == 1)
    {
        add();
    }
    else if (ask == 2)
    {
        subtract();
    }
    else if (ask == 3)
    {
        multiply();
    }
    else if (ask == 4)
    {
        divide();
    }
    else
    {
        printf("Option not in list");
    }
    printf("----------------------\n");
}
}
//Rest of operations
void add()
{   
    printf("-Addition-\n");
    int x = get_int("First number ");
    int y = get_int("Second number ");

    int z = (x + y);

    printf("The sum of the numbers are: %i\n\n",z);
}

void subtract()
{   
    printf("-Subtract-\n");
    int x = get_int("First number ");
    int y = get_int("Second number ");

    int z = (x - y);

    printf("The subtract of the numbers are: %i\n\n",z);
}
void multiply()
{   
    printf("-Multiplication-\n");
    int x = get_int("First number ");
    int y = get_int("Second number ");

    int z = (x * y);

    printf("The multiplication of the numbers are: %i\n\n",z);
}
void divide()
{
    printf("-Divide-\n");
    int x = get_int("First number ");
    int y = get_int("Second number ");

    if (y == 0)
    {
        printf("You cant divide anything with 0\n\n");
        return;
    }
    
    int z = (x / y);
    printf("The division of the numbers are: %i\n\n",z);
}
