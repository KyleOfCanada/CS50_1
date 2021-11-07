#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x and y
    float x = get_float("x: ");
    float y = get_float("y: ");
    printf("%.2f\n", x / y);
}