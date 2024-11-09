#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;

} person;

int main(void)
{

    person people[3];

    people[0].name = "Carter";
    pecr = "03224116525";

    people[2].name = "Shayan";
    people[2].number = "03364028403";

    string name = get_string("Name: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 0;
}
