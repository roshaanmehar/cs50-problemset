#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{

    string word1 = get_string("Player 1 enter his word: ");
    string word2 = get_string("Player 2 enter his word: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
        return 0;
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!\n");
        return 0;
    }
    else if (score1 == score2)
    {
        printf("Tie!\n");
        return 0;
    }
}

int compute_score(string word)
{
    int score = 0;

    for (int i = 0, length = strlen(word); i < length; i++)
    {
        if (isupper(word[i]))
        {
            score = score + points[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score = score + points[word[i] - 'a'];
        }
    }
    return score;
}
