#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

void caesar(int key);

int main(int argc, string argv[])
{
    if (argv[1] == NULL || argc > 2 || atoi(argv[1]) < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    caesar(atoi(argv[1]));
    return 0;
}

void caesar(int key)
{
    string text;
    int indx;
    char c;
    text = get_string("plaintext: ");
    int i = 0;
    while (text[i] != '\0')
    {
        if (islower(text[i]))
        {
            indx = text[i] - 97;
            c = (indx + key) % 26;
            c += 97;
            text[i] = c;
        }
        if (isupper(text[i]))
        {
            indx = text[i] - 65;
            c = (indx + key) % 26;
            c += 65;
            text[i] = c;
        }
        if (isdigit(text[i]) || isspace(text[i]) || ((int)text[i] >= 33 && (int)text[i] <= 47) || ((int)text[i] >= 58 && (int)text[i] <= 64) || ((int)text[i] >= 91 && (int)text[i] <= 96) || ((int)text[i] >= 123 && (int)text[i] <= 126))
        {
            text[i] = text[i];
        }
        i++;
    }
    printf("ciphertext: %s\n", text);
}