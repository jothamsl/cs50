#include <stdio.h>
#include <cs50.h>
#include <string.h>

void luhn(long n);
void verify(void);

// MASTERCARD: 16-Digit #'s, Start with: 51, 52, 53, 54, or 55
// VISA: 13-16-Digit #'s, Start with: 4
// AMEX: 15-Digit #'s, Star with: 34 or 37

int main(void)
{
    verify();
    return 0;
}

void verify(void)
{
    long long number;
    do
    {
        number = get_long_long("Card Number: ");
    } while (number < 34e11 || number > 55e14);
    {
        luhn(number);
    }
}

void luhn(long n)
{
    int values[16];
    int counter = 0;
    int final = 0;
    while (n)
    {
        values[counter] = n % 10;
        n /= 10;
        counter++;
    }
    int x = values[counter - 1];
    int y = values[counter - 2];
    for (int i = 1; i < counter; i += 2)
    {
        values[i] *= 2;
        if (values[i] > 9)
            values[i] -= 9;
    }
    for (int i = 1; i < counter; i++)
        final += values[i];
    if ((final % 10) != values[0])
        printf("INVALID\n");
    else if (x == 5 && y < 5)
        printf("MASTERCARD\n");
    else if (x == 4)
        printf("VISA\n");
    else if (x == 3 && (y == 4 || y == 7))
        printf("AMEX\n");
}
// 4556737586899855
//
