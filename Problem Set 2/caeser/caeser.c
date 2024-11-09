#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Please provide a single key\n");
        return 1;
    }
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int key = atoi(argv[1]);
    string plaintext = get_string("Enter the plaintext: ");
    printf("Ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        char c = plaintext[i];

        if (islower(c))
        {
            printf("%c", (c - 'a' + key) % 26 + 'a');
        }
        else if (isupper(c))
        {
            printf("%c", (c - 'A' + key) % 26 + 'A');
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}
