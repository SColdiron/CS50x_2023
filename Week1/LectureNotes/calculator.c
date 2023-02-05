#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    float z = (float) x / (float) y;
    double t = (double) x / (double) y;

    printf("%li\n", x + y);

    printf("%f\n", z);
    printf("%.20f\n", z);
    printf("%.20f\n", t);
}
