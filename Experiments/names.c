#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
  string name;
  string number;
} person;

int main(void)
{
  person people[4];
  people[0].name = "Jackson";
  people[0].number = "627-234-101";

  people[1].name = "Mary";
  people[1].number = "627-234-102";

  people[2].name = "Caleb";
  people[2].number = "627-234-103";

  people[3].name = "Baily";
  people[3].number = "627-234-104";

  for (int i = 0; i < 4; i++)
  {
    if (strcmp(people[i].name, "Caleb") == 0)
    {
      printf("%s\n", people[i].number);
      return 0;
    }
  }
  printf("Not Found\n");
  return 1;
}
