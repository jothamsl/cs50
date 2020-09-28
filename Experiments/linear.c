#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void search(string vals);

int main(void)
{
    string values;
    do {
        values = get_string("values: ");
    } while(values == NULL); {
        search(values);
    }
}

void search(string vals) 
{   
    printf("%d\n", atoi(vals));
}