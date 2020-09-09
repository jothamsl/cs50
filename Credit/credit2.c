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
    } while (number < 0);
    {
        luhn(number);
    }
}

void luhn(long n)
{
  for (int i = 0; i < ; inc-expression) {
  statements
  }
}
// 4003600000000014
