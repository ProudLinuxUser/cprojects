#include <stdio.h>

void dec_bin(int decimal);
void ftext_bin(char askusr);

int main(void)
{
        char askusr[100];
        printf("Decimal to Binary converter\n");
        printf("---------------------------\n");
        printf("Enter Ascii character to convert into Decimal and Binary: ");
        scanf("%99s",askusr);

        for (int i = 0; askusr[i] != '\0';i++)
        {
                int value = (int)askusr[i];
                printf("%c -> %d -> ",askusr[i],value);
                dec_bin(value);
        }

        printf("---------------------------\n");
        printf("Full word into Binary: \n");
        printf("%s:",askusr);
        for (int j = 0; askusr[j] != '\0' ;j++)
        {
                int ffull = (int)askusr[j];
                printf(">");
                ftext_bin(ffull);
        }
}

void dec_bin(int decimal)
{
        int bits[8];

        for (int i = 7; i >= 0; i--)
        {
                bits[i] = decimal % 2;
                decimal /= 2;
        }

        printf("Binary: ");
        for (int j = 0; j < 8; j++)
        {
                printf("%i",bits[j]);
        }
        printf("\n");
}

void ftext_bin(char full)
{
        int fbits[8];

        for (int i = 7; i >= 0; i--)
        {
                fbits[i] = full % 2;
                full /= 2;
        }

        for (int j = 0; j < 8; j++)
        {
                printf("%i",fbits[j]);
        }
}
