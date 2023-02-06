#include <cs50.h>
#include <stdio.h>
#include <string.h>

void print_row(int height, int row, string just);

int main(void)
{
    int height = 0;

    while (height < 1 || height > 8)
    {
        height = get_int("Height: ");
    }

    for (int row = 1; row <= height; row++)
    {
        print_row(height, row, "right");

        printf("  ");

        print_row(height, row, "left");

        printf("\n");
    }
}

void print_row(int height, int row, string just)
{
    for (int current = 1; current <= height; current++)
    {
        if (strcmp(just, "right") == 0 && current <= height - row)
        {
            printf(" ");
        }
        else if (strcmp(just, "left") == 0 && current > row)
        {
            // Do nothing
        }
        else
        {
            printf("#");
        }
    }
}
