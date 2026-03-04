#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long first = 1, second = 2, next;
    int count;

    /* Print the first two numbers */
    printf("%lu, %lu", first, second);

    for (count = 3; count <= 98; count++)
    {
        next = first + second;
        printf(", %lu", next);
        first = second;
        second = next;
    }

    printf("\n");
    return (0);
}
