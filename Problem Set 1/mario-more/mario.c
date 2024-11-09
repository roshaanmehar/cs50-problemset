#include <cs50.h>
#include <stdio.h>

int get_positive(void); //prototype for the function that validates the inputs given by the user

int main(void)
{
    int height = get_positive(); 

    for (int i = 1; i <= height; i++)
    {
        for (int s = 0; s < (height - i); s++)
        {
            printf(" ");
        }
        for (int h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("  ");
        for (int h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_positive(void)
{
    int n;
    do
    {
        n = get_int("Enter the height of the pyramid: ");
    }
    while (n <= 0 || n > 8);
    return n;
}
