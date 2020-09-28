#include <stdio.h>
#include <cs50.h>

void pyramid(int h);

int main(void)
{
    int height = get_int("Height: ");
    pyramid(height);
}

void pyramid(int h)
{
    if (h == 0) return;
    pyramid(h - 1);
    for (int i = 0; i < h; i++) printf("#");
    printf("\n");
}