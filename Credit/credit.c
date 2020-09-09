#include <stdio.h>
#include <cs50.h>
#include <string.h>

int luhn();
void validator(void);

int main(void)
{
  validator();
}

// implement validator logic after luhn
void validator(void)
{
  char res[2];
  long minima = 1000000000000;
  long maxima = 1000000000000000;
  long credit;
  do
  {
    credit = get_long("Number: ");
  } while (credit < minima || credit > maxima);
  {
    char numString[16];
    sprintf(numString, "%ld", credit);
    sprintf(res, "%i", luhn(numString));
    if(res[1] != 0) printf("INVALID\n");
    else if((numString[0] == 3 && numString[1] == 4) || (numString[0] == 3 && numString[1] == 7))
      printf("AMEX\n");
    else if(numString[0] == 5 && (numString[1] == 1 || numString[1] == 2 || numString[1] == 3 || numString[1] == 4 || numString[1] == 5))
      printf("MASTERCARD\n");
    else printf("VISA\n");
  }
}

int luhn(char numString[])
{
  int cummulator1 = 0;
  int cummulator2 = 0;
  for (int i = 0; i < strlen(numString); i += 2)
    cummulator1 += (numString[i] - '0') * 2;
  for (int i = 1; i < strlen(numString); i += 2)
    cummulator2 += (numString[i] - '0');
  return cummulator1 + cummulator2;
}

// 378282246310005
