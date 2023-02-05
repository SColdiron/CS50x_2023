#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Prints line of '?'
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    printf("\n");

    // Prints line of '#'
    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

    printf("\n");

    // Prints grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n\n\n");

    //--------------------------------------

    // Get size of grid
    int x = get_size();

    // Print grid of bricks
    print_grid(x);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
