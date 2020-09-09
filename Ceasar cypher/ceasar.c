#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

// TODO: create ceaser algorithm with ASCII table

void cypher(int key);

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    //Ensure amount of arguments
    if (argc != 2)
    {
        printf("Enter a valid argument\n");
        return 1;
    }
    //Check if argument is decimal type
    else if (atoi(argv[1]) < 1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // run algorithm
    else
        cypher(key);
}

void cypher(int key)
{
    string text;
    int textLength;
    do
    {
        text = get_string("plaintext: ");
    } while (text == NULL);
    {
        for (int i = 0; i < strlen(text); i++)
            text[i] += key;
        printf("%s\n", text);
    }
}