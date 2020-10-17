#include <stdio.h>
#include <math.h>
#include <cs50.h>

void coleman(string text);

int main(void)
{
    string text;
    do
    {
        text = get_string("Text: ");
    } while (text == NULL);
    {
        coleman(text);
    }
    return 0;
}

void coleman(string text)
{
    int numWords = 1;
    int numLetters, numSentences = 0, i = 0;
    float l;
    float s;
    int grade;

    while (text[i] != '\0')
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            numSentences++;
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t')
            numWords++;
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            numLetters++;
        i++;
    }

    l = ((float)numLetters / numWords) * 100.0;
    s = ((float)numSentences / numWords) * 100.0;
    grade = round(0.0588 * l - 0.296 * s - 15.8);

    if (grade < 1) printf("%s\n", "Before Grade 1");
    else if (grade >= 16) printf("Grade %s\n", "16+");
    else printf("Grade %d\n", grade);
}