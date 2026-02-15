#include <stdio.h>

int main(void)
{
        char text[100];
        int encrypt[100];
        int decrypt[100];
        int shift = 7;
        printf("Enter message: ");
        scanf("%s",text);

        printf("Original: ");
        for (int i = 0; text[i] != '\0';i++)
        {
                encrypt[i] = (int)text[i] + shift;
                decrypt[i] = (char)encrypt[i] - shift;
                printf("%c",text[i]);
        }
        printf("\n");
        printf("Encryption: ");
        for (int i = 0; text[i] != '\0';i++)
        {
                printf("%c",encrypt[i]);
        }
        printf("\n");
        printf("Decryption: ");
        for (int i = 0; text[i] != '\0';i++)
        {
                printf("%c",decrypt[i]);
        }

}
