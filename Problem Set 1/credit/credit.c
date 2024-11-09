#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long cnum = get_long("Enter your Credit/Debit card number: ");

    int sum = 0;
    int digit_count = 0;
    long temp = cnum;

    // Loop to calculate sum using Luhn's algorithm and count digits
    while (temp > 0)
    {
        int last_digit = temp % 10; // Get the last digit
        if (digit_count % 2 == 0)
        {
            sum += last_digit; // Add if it's an even position
        }
        else
        {
            last_digit *= 2; // Multiply by 2 if it's an odd position
            if (last_digit > 9)
            {
                last_digit =
                    (last_digit % 10) + (last_digit / 10); // Sum the digits if greater than 9
            }
            sum += last_digit; // Add the processed last digit
        }
        temp /= 10;    // Remove the last digit
        digit_count++; // Increment the digit count
    }

    // Validate the sum
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0; // If sum is not divisible by 10, it's invalid
    }

    // Determine card type
    if (digit_count == 15 && (cnum / 10000000000000 == 34 || cnum / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    else if (digit_count == 16 && (cnum / 100000000000000 >= 51 && cnum / 100000000000000 <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((digit_count == 13 && (cnum / 1000000000000 == 4)) ||
             (digit_count == 16 || cnum / 1000000000000000 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
