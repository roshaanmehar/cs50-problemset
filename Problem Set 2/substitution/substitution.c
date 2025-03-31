#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isValid(string key);
void encrypt(string text, string key);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Please provide a key.\n");
        return 1;
    }
    string key = argv[1];
    if (!isValid(key))
    {
        printf("Invalid key!\n");
        return 1;
    }
    printf("plaintext: ");
    string plaintext = get_string("");
    printf("\n");
    printf("ciphertext: ");
    encrypt(plaintext, key);
}

bool isValid(string key)
{
    if (strlen(key) != 26)
    {
        printf("The key must consist of 26 letters!\n");
        return false;
    }
    bool seen[26] = {false};
    for (int i = 0; i < 26; i++)
    {
        char c = key[i];

        if (!isalpha(c))
        {
            printf("The key must only contain alphabetic characters!\n");
            return false;
        }
        int index = tolower(c) - 'a';
        if (seen[index])
        {
            printf("The key must not contain repeated characters!\n");
            return false;
        }
        seen[index] = true;
    }
    return true;
}
void encrypt(string text, string key)
{
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];
        if (islower(c))
        {
            printf("%c", tolower(key[c - 'a']));
        }
        else if (isupper(c))
        {
            printf("%c", toupper(key[c - 'A']));
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
}
