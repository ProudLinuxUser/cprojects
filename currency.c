#include <stdio.h>
#include <cs50.h>

int calculate(int n);

const float euro = 1;
const float usd = 1.17;

//==The program's currency based on todays market (2026/01/03).

int main(void)
{
        string menu[] = {
        "|1|-Euro to USD-|\n",
        "|2|-USD to Euro-|\n"
        };

        for (int i = 0; i < 2; i++)
        {
                printf("%s",menu[i]);
        }
        printf("----------------|\n");

        int asking = get_int("|Enter option| ");
        calculate(asking);
}
int calculate(int n)
{
        if (n == 1)
        {
        float euro = get_float("|Enter Euro| ");
        float sum = euro * usd;
        printf("------------------------------------\n");
        printf("|%.2f Euro converted to USD is %.2f|\n",euro,sum);
        }

        else if (n == 2)
        {
        float USD = get_float("|Enter USD| ");
        float sum = USD - 0.17 * euro - 0.15;
        printf("------------------------------------\n");
        printf("|%.2f USD converted to Euro is %.2f|\n",USD,sum);
        }
}
