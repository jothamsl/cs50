#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("height: ");
    } while (height <= 0 || height > 8);
    {
        for (int i = 1; i <= height; i++)
        {
            for (int j = height; j > i; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < i; k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    return 0;
}