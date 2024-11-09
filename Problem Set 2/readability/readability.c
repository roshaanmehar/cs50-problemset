#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int countLetters(string txt);
int countWords(string txt);
int countSentences(string txt);

int main(void)
{
    // prompt the user for some text
    string text = get_string("Write a paragraph: ");

    // count the number of letters, words, and sentences in the text
    int letters = countLetters(text);
    // printf("Letters: %i\n", letters);

    int words = countWords(text);
    // printf("Words: %i\n", words);

    int sentences = countSentences(text);
    // printf("Sentences: %i\n", sentences);

    // compute the colemain-lieu index (to be implemented)
    float l = ((float) letters / words) * 100;
    float s = ((float) sentences / words) * 100;
    float index = 0.0588 * l - 0.296 * s - 15;
    // printf("index: %f\n", index);make
    
        // print the grade level (to be implemented)
    if (index < 1 )
    {
        printf("Below Grade 1\n");
    }
    else if (index >= 1 && index < 2)
    {
        printf("Grade 1\n");
    }
    else if (index >= 2 && index < 3)
    {
        printf("Grade 2\n");
    }
    else if (index >= 3 && index < 4)
    {
        printf("Grade 3\n");
    }
    else if (index >= 4 && index < 5)
    {
        printf("Grade 4\n");
    }
    else if (index >= 5 && index < 6)
    {
        printf("Grade 5\n");
    }
    else if (index >= 6 && index < 7)
    {
        printf("Grade 6\n");
    }
    else if (index >= 7 && index < 8)
    {
        printf("Grade 7\n");
    }
    else if (index >= 8 && index < 9)
    {
        printf("Grade 8\n");
    }
    else if (index >= 9 && index < 10)
    {
        printf("Grade 9\n");
    }
    else if (index >= 10 && index < 11)
    {
        printf("Grade 10\n");
    }
    else if (index >= 11 && index < 12)
    {
        printf("Grade 11\n");
    }
    else if (index >= 12 && index < 13)
    {
        printf("Grade 12\n");
    }
    else if (index >= 13 && index < 14)
    {
        printf("Grade 13\n");
    }
    else if (index >= 14 && index < 15)
    {
        printf("Grade 14\n");
    }
    else if (index >= 15 && index < 16)
    {
        printf("Grade 15\n");
    }
    else if (index >= 16 && index < 17)
    {
        printf("Grade 16\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
}

int countLetters(string txt)
{
    int letters = 0;
    for (int i = 0, length = strlen(txt); i < length; i++)
    {
        if (isalpha(txt[i]))
        {
            letters++;
        }
    }
    return letters;
}

int countWords(string txt)
{
    int words = 0;
    for (int i = 0, length = strlen(txt); i < length; i++)
    {
        if (txt[i] == ' ')
        {
            words++;
        }
    }
    return words + 1;
}

int countSentences(string txt)
{
    int sentences = 0;
    for (int i = 0, length = strlen(txt); i < length; i++)
    {
        if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
