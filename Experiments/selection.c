#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

void sorter(int arr[], int size);

int main(void)
{
    int values[] = {4, 3, 5, 2};
    int arrsize = sizeof(values) / sizeof(int);
    sorter(values, arrsize);
    return 0;
}

void sorter(int array[], int size)
{
    int point = array[0];
    for (int i = 0; i < size - 1; i++)
    {
        point = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[point])
            {
                point = array[j];
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", array[i]);
    }
}