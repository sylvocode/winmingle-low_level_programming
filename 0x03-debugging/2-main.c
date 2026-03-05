#include "main.h"

/**
 * main - tests the largest_number function
 * Return: 0
 */
int main(void)
{
    int a, b, c;

    a = 972;
    b = 0;
    c = -98;

    printf("%d is the largest number\n", largest_number(a, b, c));

    return (0);
}
