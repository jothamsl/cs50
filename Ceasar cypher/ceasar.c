#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int cypher(int key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Enter a valid argument\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key < 0)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }
    else
        cypher(key);
}

int cypher(int key)
{
    string text;
    text = get_string("plaintext: ");

    for (int i = 0; i < strlen(text); i++)
    {
        if isupper (text[i])
            printf("%c", (((text[i] += key) - 65) % 26) + 65);
        else if islower (text[i])
            printf("%c", (((text[i] += key) - 97) % 26) + 97);
        else
            printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}
