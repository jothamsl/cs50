#include <stdio.h>
#include <cs50.h>
#include <math.h>

const int quarter = 25;
const int dime = 10;
const int nickel = 5;
const int penny = 1;
const int dollar = 100;

void greedy(int cent);

int main(void)
{
    float change;
    int dollarCent;
    float decimalCent;
    int totalCent;
    do
    {
        change = get_float("Change owed: ");
    } while (change < 0.00001);
    {
        dollarCent = round(change) * dollar;
        decimalCent = round((change - round(change)) * dollar);
        totalCent = dollarCent + decimalCent;
        greedy(totalCent);
    }

    return 0;
}

void greedy(int cent)
{
    int centCount = 0;
    int centdiff = cent;
    while (quarter <= centdiff)
    {
        centdiff = centdiff - quarter;
        centCount++;
    }
    while (dime <= centdiff)
    {
        centdiff -= dime;
        centCount++;
    }
    while (nickel <= centdiff)
    {
        centdiff -= nickel;
        centCount++;
    }
    while (penny <= centdiff)
    {
        centdiff -= penny;
        centCount++;
    }
    printf("%d\n", centCount);
}